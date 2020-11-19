#include "capot.h"
#include "mcculdaq.h"

Capot::Capot(MccUldaq &_laCarte, const int _numDio,  QObject *parent):
QObject(parent),
  numDio(_numDio),
  laCarte(_laCarte)
{

laCarte.ulDConfigBit(numDio,DD_INPUT);
laCarte.ulDBitIn(numDio,etatCapot);
}
