#include <QCoreApplication>
#include "HistogramBase.cpp"
#include "Histogram.h"
#include <stdio.h>
#include <iostream>

using std::cout;
using std::endl;
using namespace Hist;

int main(int argc, char *argv[])
{
    Logger logaaja;

    //Hist::HistogramBase histogrammipohja(std::unique_ptr<Logger> &logaaja);
    Histogram histogrammi(std::unique_ptr<Logger> &logaaja);
    //RandomEintegerGenerator generaattori;
    //Hist::RandomEintegerGenerator();

    QCoreApplication a(argc, argv);

    cout<<"abcdefg"<<endl;

    return a.exec();
}
