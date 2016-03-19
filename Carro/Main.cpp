#include "Veiculo.h"
#include "Caminhao.h"
#include "Carro.h"

#include "Pessoa.h"

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
  Carro carro01;

  Pessoa* dono = new Pessoa("Fulalas", Data(15, 5, 1985));

  carro01.aceleracao();
  carro01.aceleracao();

  cout << "Velocidade: " << carro01.getVelocidade() << endl;

  carro01.freio();

  cout << "Velocidade: " << carro01.getVelocidade() << endl;

  delete dono;


  return(0);
}