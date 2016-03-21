#ifndef VEICULO_H
#define VEICULO_H

#include "Pessoa.h"

#include <string>

class Veiculo
{
public:
  Veiculo(const Veiculo &);
  Veiculo(std::string cor, float velocidadeMax);
  Veiculo();

  virtual void aceleracao() = 0;
  virtual void freio() = 0;

  virtual float getVelocidade();

  virtual void setDono(Pessoa* nome);

protected:
  float velocidade;
  float velocidadeMax;

  std::string cor;

  static const std::string verInjecaoEletronica;

  Pessoa* dono;
  };

#endif // VEICULO_H