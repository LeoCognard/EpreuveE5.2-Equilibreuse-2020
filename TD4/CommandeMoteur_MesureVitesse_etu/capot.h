#ifndef CAPOT_H
#define CAPOT_H

#include <QObject>
#include <QTimer>
#include "mcculdaq.h"



class Capot : public QObject
{
    Q_OBJECT
public:
    explicit Capot(MccUldaq &_laCarte, const int _numDio, QObject *parent = nullptr);
    bool getEtatCapot() const;

signals:
    void EtatCapotChange(bool _etat);

private slots:
    void onTimerCapot_timeout();

private:
    MccUldaq &laCarte;
    QTimer timerCapot;
    const int numDio;
    bool etatCapot;
};

#endif // CAPOT_H
