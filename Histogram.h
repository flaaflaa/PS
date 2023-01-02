#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include "HistogramBase.h"
#include <vector>

//using namespace Hist;
using std::vector;

namespace Hist
{
    class Histogram : public HistogramBase
    {
    public:
        //Histogram(int a);
        //Histogram(std::unique_ptr<Logger>);
        //~Histogram();

        using HistogramBase::HistogramBase; //Inherits all constructors?

        //ERROR: Only virtual member functions can be marked 'override'
        //Histogram() override;

        void add(EInteger);

        // Return the value that occurrs most often in the data set (I.e. there exists no other value that occurs more often than the return value)
        EInteger getMode() const;

        // Return the smallest value in the data set, according to default ordering relation of integer numbers
        EInteger getMinValue() const;

        // Return the largest value in the data set
        EInteger getMaxValue() const;

    private:
        //Histogrammin lukujoukko taulukkona tms.
        vector<EInteger> histogramVector;

    };
}
#endif // HISTOGRAM_H
