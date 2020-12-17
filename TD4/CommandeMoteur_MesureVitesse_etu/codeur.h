#ifndef CODEUR_H
#define CODEUR_H
#include "mcculdaq.h"
#include <QObject>

class Codeur : public QObject
{
    Q_OBJECT
public:
    Codeur(MccUldaq &_laCarte,QObject *parent = nullptr);
    ~Codeur();
private:
    MccUldaq &laCarte;
};

#endif // CODEUR_H
