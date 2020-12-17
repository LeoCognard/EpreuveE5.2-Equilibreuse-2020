#ifndef MOTEUR_H
#define MOTEUR_H

#include "mcculdaq.h"

class Moteur
{
public:
    Moteur(MccUldaq &_laCarte, const int _numCanal, const double _tensionMax=4);
    ~Moteur();
    void FixerConsigneVitesse(const int _pourcentage);
private:
    MccUldaq &laCarte;
    int numCanal;
    double tensionMaxCommande;

};



#endif // MOTEUR_H
