#ifndef VASEARCHMODEL_H
#define VASEARCHMODEL_H

#include <QObject>
#include <QQuickItem>
#include "vadirector.h"

class VASearchModel : public QObject, public IColleague
{
    Q_OBJECT
    Q_PROPERTY(QQuickItem* window READ window WRITE setWindow)
public:
    explicit VASearchModel(QObject *parent = nullptr);

    void setWindow(const QQuickItem* window);
    QQuickItem* window();

signals:

};

#endif // VASEARCHMODEL_H
