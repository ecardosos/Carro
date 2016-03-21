#include "Bicicleta.h"
#include "Caminhao.h"
#include "Carro.h"

#include "Pessoa.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
  vector<Veiculo *> veiculos(2);
  Caminhao caminhao01(1);
  Carro carro01(4);

  carro01.aceleracao();
  caminhao01.aceleracao();

  cout << "Velocidade: " << carro01.getVelocidade() << endl;
  cout << "Velocidade: " << caminhao01.getVelocidade() << endl;

  carro01.freio();
  caminhao01.freio();

  cout << "Velocidade: " << carro01.getVelocidade() << endl;
  cout << "Velocidade: " << caminhao01.getVelocidade() << endl;

  return(0);
}