#include "Caminhao.h"

#include <iostream>

using namespace std;

Caminhao::Caminhao(const Caminhao &outro) : Veiculo(static_cast <Veiculo>(outro))
{
    capacidadeMax = outro.capacidadeMax;
}

Caminhao::Caminhao()
{
    capacidadeMax = 0;
}

float Caminhao::getCapacidadeMax()
{
    return capacidadeMax;
}