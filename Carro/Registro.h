#ifndef REGISTRO_H
#define REGISTRO_H

#include "Data.h"
#include "Multa.h"

#include <string>

class Registro
{
public:
  Registro();
  Registro(Data d, std::string p);

  void setDataLicenciamento(int dia, int mes, int ano);
  void setPlaca(std::string p);
  void adicionarMulta(const Multa &m);

  Data getDataLicenciamento();
  std::string getPlaca();
  Multa* getMultas(int &n);

private:
  std::string placa;
  Data dataLicenciamento;
  Multa* multas;
  int numMultas;
};
#endif // REGISTRO
