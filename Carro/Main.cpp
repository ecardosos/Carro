#include "Carro.h"

#include "Pessoa.h"
#include "Registro.h"

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{

  Pessoa* dono = new Pessoa("Fulalas", Data(15, 5, 1985));
  Registro* licenciamento = new Registro(Data(10, 10, 2003), "ABC-1234");

  Carro carro01(dono, licenciamento, "azul");

  Carro c2 = carro01;

  carro01.aceleracao();

  cout << "Velocidade: " << carro01.getVelocidade() << endl;

  carro01.freio();

  cout << "Velocidade: " << carro01.getVelocidade() << endl;

  delete dono;
  delete licenciamento;

  return(0);
}