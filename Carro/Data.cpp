#include "Data.h"

#include <iostream>

using namespace std;

const int Data::diasPorMes[13] = { 0, 30, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

Data::Data(int d, int m, int a)
{
  dia = d;
  mes = m;
  ano = a;
}

int Data::validacaoData(int dia)
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

int Data::getDia() const
{
  return dia;
}

int Data::getMes() const
{
  return mes;
}

int Data::getAno() const
{
  return ano;
}

void Data::print() const
{
  cout << "Data: " << dia << "/" << mes << "/" << ano << "\n";
}