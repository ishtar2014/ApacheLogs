#pragma once
#include "AllHeaders.h"

using namespace std;


struct DateTime
{
//protected:
    int dataiczas;
    string humanDate;
//public:

    DateTime();
    DateTime(string log);
    ~DateTime();

    ///Metody:
    virtual void wyswietl();
};

