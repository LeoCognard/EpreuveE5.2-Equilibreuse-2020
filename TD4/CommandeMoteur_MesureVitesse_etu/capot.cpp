#include "capot.h"
#include "constantes.h"
#include <QDebug>


Capot::Capot(MccUldaq &_laCarte, const int _numDio, QObject *parent):
    QObject(parent),
    laCarte(_laCarte),
    numDio(_numDio)
{
    UlError erreur;
    erreur = laCarte.ulDConfigBit(numDio,DD_INPUT);
    if(erreur == ERR_NO_ERROR)
    {
        erreur = laCarte.ulDBitIn(numDio,etatCapot);
        timerCapot.start(TEMPO_CAPOT);
    }
    connect(&timerCapot,&QTimer::timeout,this,&Capot::onTimerCapot_timeout);
    qDebug() << "Code erreur MccUldaq : " << erreur ;
}

void Capot::onTimerCapot_timeout()
{
    bool etatCourant;
    UlError erreur;
    erreur = laCarte.ulDBitIn(numDio,etatCourant);
    if(etatCapot != etatCourant)
    {
        emit EtatCapotChange(etatCourant);
        etatCapot = etatCourant;
    }
    qDebug() << "Code erreur MccUldaq : " << erreur ;
}

bool Capot::getEtatCapot() const
{
    return etatCapot;
}

