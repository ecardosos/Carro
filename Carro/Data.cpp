#include "Data.h"

#include <iostream>

using namespace std;

const int Data::diasPorMes[13] = { 0, 30, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

Data::Data(int dia, int mes, int ano)
{
  dia = dia;
  mes = mes;
  ano = ano;
}

int Data::validacaoData()
{
  int d = diasPorMes[mes];
  if ((dia > 0) && (dia <= d))
    return dia;
  else if ((mes == 2) && (dia == 29) && ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0))))
    return dia;
  else
  {
    cout << "data inválida!";
    return 1;
  }
}

void Data::print() const
{
  cout << "Data: " << dia << "/" << mes << "/" << ano << "\n";
}