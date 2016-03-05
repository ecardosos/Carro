#include "Carro.h"

#include "Pessoa.h"
#include "Registro.h"

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
  Pessoa* dono = new Pessoa("Fulalas", Data(15, 5, 1985));
  Registro* registroVeiculo = new Registro(Data(10, 10, 2003), "ABC-1234");
  Carro carro01(dono, registroVeiculo, "azul");

  Multa m1 = Multa(Data(12, 05, 2004), "Direcao sob influencia de alcool", 1915.40f);
  Multa m2 = Multa(Data(12, 05, 2005), "Direcao perigosa", 191.54f);
  registroVeiculo->adicionarMulta(m1);
  registroVeiculo->adicionarMulta(m2);

  carro01.aceleracao();

  cout << "Velocidade: " << carro01.getVelocidade() << endl;

  carro01.freio();

  cout << "Velocidade: " << carro01.getVelocidade() << endl;

  delete dono;
  delete registroVeiculo;

  return(0);
}