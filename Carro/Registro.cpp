#include "Registro.h"

using namespace std;

Registro::Registro()
{
  dataLicenciamento = Data();
}

Registro::Registro(Data d, string p) : dataLicenciamento(d),
                                       placa(p)
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