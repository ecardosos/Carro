#include "Registro.h"

using namespace std;

Registro::Registro()
{
  dataLicenciamento = Data();
}

Registro::Registro(Data d, string p) : dataLicenciamento(d),
                                       placa(p),
                                       multas(nullptr),
                                       numMultas(0)
{
}

void Registro::setDataLicenciamento(int dia, int mes, int ano)
{
  dataLicenciamento.setDia(dia);
  dataLicenciamento.setMes(mes);
  dataLicenciamento.setAno(ano);
}

void Registro::setPlaca(string p)
{
  placa = p;
}

void Registro::adicionarMulta(const Multa &m)
{
  if (numMultas != 0)
  {
    Multa* ms = new Multa[++numMultas];
    for (int i = 0; i < numMultas - 1; i++)
    {
      ms[i] = Multa(multas[i]);
    }

    delete[] multas;

    multas = ms;
    multas[numMultas-1] = m;
  }
  else
  {
    multas = new Multa[++numMultas];
    multas[0] = m;
  }
}

Data Registro::getDataLicenciamento()
{
  return dataLicenciamento;
}

string Registro::getPlaca()
{
  return placa;
}

Multa* Registro::getMultas(int &n)
{
  n = numMultas;
  return multas;
}
