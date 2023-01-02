#include "HistogramBase.h"

using namespace Hist;

HistogramBase::~HistogramBase()
{
    return;
}

HistogramBase::HistogramBase(std::unique_ptr<Logger>)
{
    return;
}

HistogramBase::HistogramBase(const HistogramBase&)
{
    return;
}

HistogramBase::HistogramBase(HistogramBase&&)
{
    return;
}
