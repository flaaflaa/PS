#include "Histogram.h"

using namespace Hist;
Histogram::Histogram(std::unique_ptr<Logger>)
{
   return;
}
/*

Histogram f()
{
    int a{1};
    Histogram v = Histogram(a); // copy elision when initializing v
                       // from a temporary (until C++17) / prvalue (since C++17)
    return v; // NRVO from v to the result object (not guaranteed, even in C++17)
}             // if optimization is disabled, the move constructor is called
*/

void Hist::Histogram::add(EInteger)
{
    return;
}

EInteger Hist::Histogram::getMode() const
{
    return Zero;
}

EInteger Hist::Histogram::getMinValue() const
{
    return Zero;
}

EInteger Hist::Histogram::getMaxValue() const
{
    return Zero;
}
