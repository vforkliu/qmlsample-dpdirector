#ifndef VADIRECTOR_H
#define VADIRECTOR_H

#include <QObject>
#include <QQuickWindow>

class VADirector;

class IColleague {
    Q_GADGET
//    Q_PROPERTY(QQuickWindow* window READ window WRITE setWindow)
public:
    IColleague();
    virtual ~IColleague();

//    void setWindow(const QQuickWindow* window);
//    QQuickWindow* window();

//    Q_INVOKABLE void setRootWindow(QQuickWindow* window);

private:
    void registerToDirector();
    void unregisterFromDirector();

private:
    VADirector* m_director;

};

class VADirector : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QQuickWindow* window READ window WRITE setWindow)
public:
    explicit VADirector(QObject *parent = nullptr);
    virtual ~VADirector();

    void setWindow(const QQuickWindow* window);
    QQuickWindow* window();

signals:

};

#endif // VADIRECTOR_H
