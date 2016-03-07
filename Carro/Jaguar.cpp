#include "Jaguar.h"

#include <iostream>

using namespace std;

ostream &operator<<(ostream &output, const Jaguar &j)
{
    output <<;
    return output;
}

Jaguar::Jaguar()
{
    acOnOff = false;
}

void setArCondicionadoOn(bool onOff)
{
    acOnOff = true;
}

bool getArCondicionadoOn()
{
    return acOnOff;
}