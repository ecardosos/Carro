#include "Carro.h"

#include <iostream>

using namespace std;

ostream &operator<<(ostream &output, const Carro &c)
{
    output << "número de assentos:" << numAssentos;
    return output;
}

Carro::Carro()
{
    
}

int Carro::getNumAssentos()
{
    return numAssentos;
}
