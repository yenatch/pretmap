#ifndef HEALLOCATION_H
#define HEALLOCATION_H

#include <QString>
#include <QDebug>

class HealLocation {

public:
    HealLocation()=default;
    HealLocation(QString, size_t, size_t);
    friend QDebug operator<<(QDebug debug, const HealLocation &hl);

public:
    //QString group;
    QString name;
    size_t  x;
    size_t  y;

};

#endif // HEALLOCATION_H
