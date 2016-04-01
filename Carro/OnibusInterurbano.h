#ifndef ONIBUSINTERURBANO_H
#define ONIBUSINTERURBANO_H

#include "VeiculoTransportePassageiros.h"

#include <iostream>

class OnibusInterurbano: public VeiculoTransportePassageiros
{
  friend std::ostream &operator<<(std::ostream &output, const OnibusInterurbano &c);
  
public:
  OnibusInterurbano();
  OnibusInterurbano(int numAssent);
  OnibusInterurbano(const OnibusInterurbano &);
  
  OnibusInterurbano & operator=(const OnibusInterurbano &o);
  
  void aceleracao() override;
  void freio() override;

  int getCapacidade() override;

private:
  int numAssentos;
  std::string origem;
  std::string destino;
  };
#endif // ONIBUSINTERURBANO_H