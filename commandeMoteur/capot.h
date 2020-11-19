#ifndef CAPOT_H
#define CAPOT_H
#include <QTimer>
#include <QObject>

class MccUldaq;

class Capot: public QObject
{
    Q_OBJECT
public:
    Capot( MccUldaq &_laCarte, const int _numDio,QObject *parent = nullptr);
    void onTimerCapot_timeout();
private:
    bool etatCapot;
    const int numDio;
    QTimer timerCapot;
     MccUldaq &laCarte;
signals:
void EtatCapotChange(bool etatCapot);
};

#endif // CAPOT_H
