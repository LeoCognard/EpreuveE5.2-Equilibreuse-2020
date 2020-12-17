#include "moteur.h"
#include <QDebug>

Moteur::Moteur(MccUldaq &_laCarte, const int _numCanal, const double _tensionMax):
    laCarte(_laCarte),
    numCanal(_numCanal),
    tensionMaxCommande(_tensionMax)
{
    UlError erreur;
    erreur = laCarte.ulAOut(numCanal,0);
    qDebug() << "Code erreur MccUldaq : " << erreur ;
}

Moteur::~Moteur()
{
    UlError erreur;
    erreur = laCarte.ulAOut(numCanal,0);
    qDebug() << "Code erreur MccUldaq : " << erreur ;
}

void Moteur::FixerConsigneVitesse(const int _pourcentage)
{
    double valeurTension = tensionMaxCommande * _pourcentage / 100.0 ;
    UlError erreur;
    erreur = laCarte.ulAOut(numCanal,valeurTension);
    qDebug() << "Code erreur MccUldaq : " << erreur ;
}

