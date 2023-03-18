#include "vasearchmodel.h"

VASearchModel::VASearchModel(QObject *parent)
    : QObject{parent}
{

}

void VASearchModel::setWindow(const QQuickItem *window)
{
    qDebug() << "VASearchModel::setWindow";
    if (window) {
        qDebug() << "window Id:" << window->window()->winId();
        // s_mgr.add(window->winId(), this);
    }
}

QQuickItem *VASearchModel::window()
{
    return nullptr;
}
