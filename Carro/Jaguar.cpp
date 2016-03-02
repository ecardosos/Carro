#include "Jaguar.h"

#include <iostream>
#include <string>

using namespace std;

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