#include "vadirector.h"
#include <QDebug>
#include <QMap>


class VADirectorManager {
public:
    VADirectorManager(){
        m_directors.clear();
    }

    void add(WId id, VADirector* director) {
        if (m_directors.contains(id)) {
            qWarning() << "id exist:" << id;
        }
        m_directors.insert(id, director);
    }

    void del(VADirector* director) {
        auto it = m_directors.begin();
        while (it != m_directors.end()) {
            if (it.value() == director) {
                qDebug() << "remove director window id:" << it.key();
                m_directors.erase(it);
                break;
            }
            it++;
        }
    }
private:
    QMap<WId, VADirector*> m_directors;
};

static VADirectorManager s_mgr;

VADirector::VADirector(QObject *parent)
    : QObject{parent}
{
    qDebug() << "VADirector::ctor called. winId:";
}

VADirector::~VADirector()
{
    qDebug() << "VADirector::dtor";
    s_mgr.del(this);
}

void VADirector::setWindow(const QQuickWindow *window)
{
    qDebug() << "setWindow";
    if (window) {
        qDebug() << "window Id:" << window->winId();
        s_mgr.add(window->winId(), this);
    }
}

QQuickWindow *VADirector::window()
{
    qDebug() << "getWindow";
    return nullptr;
}

IColleague::IColleague()
{
    qDebug() << "IColleague::ctor called.";
}

IColleague::~IColleague()
{
    qDebug() << "IColleague::dtor called";
}

//void IColleague::setWindow(const QQuickWindow *window)
//{
//    qDebug() << "IColleague::setWindow";
//    if (window) {
//        qDebug() << "window Id:" << window->winId();
//        // s_mgr.add(window->winId(), this);
//    }
//}

//QQuickWindow *IColleague::window()
//{
//    return nullptr;
//}

//void IColleague::setRootWindow(QQuickWindow *window)
//{
//    setWindow(window);
//}

void IColleague::registerToDirector()
{

}

void IColleague::unregisterFromDirector()
{

}
