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
  vector<Veiculo *> veiculos;
  veiculos.push_back(new Caminhao(2));
  veiculos.push_back(new Carro(4));
  veiculos.push_back(new Bicicleta(1));

  for (int i = 0; i < veiculos.size(); i++)
  {
    Carro *ptr = dynamic_cast<Carro *> (veiculos[i]);

    if (ptr != NULL)
    {
      cout << "vamos à praia.";
    }
  }

  veiculos.clear();

  return(0);
}