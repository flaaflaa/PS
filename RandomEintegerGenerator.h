#ifndef RANDOMEINTEGERGENERATOR_H
#define RANDOMEINTEGERGENERATOR_H

#include "HistogramBase.h"

using namespace Hist;

class RandomEintegerGenerator : public HistogramBase
{
public:
    // Returns a pseudo-random EInteger value
    EInteger operator()();
};

#endif // RANDOMEINTEGERGENERATOR_H
