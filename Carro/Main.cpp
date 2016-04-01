#include "OnibusInterurbano.h"
#include "Caminhao.h"
#include "Metro.h"

#include "Pessoa.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
  string estacao;

  vector<Veiculo *> veiculos;
  veiculos.push_back(new Caminhao);
  veiculos.push_back(new Metro);
  veiculos.push_back(new OnibusInterurbano);
  veiculos.push_back(new Metro);
  veiculos.push_back(new OnibusInterurbano);
  veiculos.push_back(new Metro);

  for (int i = 0; i < veiculos.size(); i++)
  {
    veiculos[i] -> aceleracao;

    Metro *ptr = dynamic_cast<Metro *> (veiculos[i]);

    if (ptr != NULL)
    {
        cout << "Insira o nome da próxima estação:";
        cin >> estacao;

        cout << "próxima estação: " << estacao;
        veiculos[i] -> freio;
    }
  }

  veiculos.clear();

  return(0);
}