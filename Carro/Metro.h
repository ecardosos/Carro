#ifndef METRO_H
#define METRO_H

#include "VeiculoTransportePassageiros.h"
#include "PassagemMetro.h"

#include <iostream>

class Metro : public VeiculoTransportePassageiros
{
  friend std::ostream &operator<<(std::ostream &output, const Metro &m);

public:
  Metro();
  Metro(int primClass, int acSegClass, int noAcSegClass);
  Metro(const Metro &);

  Metro & operator=(const Metro &m);

  void aceleracao() override;
  void freio() override;

  PassagemMetro comprarPassagem();
  void comprarCreditos(PassagemMetro p);

  int getCapacidade() override;

  bool validacao();

private:
  int primClasse;
  int acSegClasse;
  int noAcSegClasse;

  static const float s_valPassagem;
};
#endif // METRO_H
