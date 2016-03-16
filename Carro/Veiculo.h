#ifndef VEICULO_H
#define VEICULO_H

#include "Pessoa.h"

#include <string>

class Veiculo
{
public:
  Veiculo(const Veiculo &);
  Veiculo(std::string cor);
  Veiculo();

  virtual void aceleracao() = 0;  
  virtual void freio();
  int getVelocidade();

  virtual void setDono(Pessoa* nome);
  
protected:
  int velocidade;
  float velocidadeMax;

  std::string cor;

  static const std::string verInjecaoEletronica;

  Pessoa* dono;
  };

#endif // VEICULO_H