#ifndef CARRO_H
#define CARRO_H

#include "Pessoa.h"

#include <string>

class Carro
{
public:
  Carro(const Carro &);
  void aceleracao();
  void freio();
  int getVelocidade();
  void setMotorista(Pessoa* nome);
  void setDono(Pessoa* nome);

private:
  int velocidade;
  std::string cor;
  static const std::string verInjecaoEletronica;
  Pessoa* motorista;
  Pessoa* dono;
  };

#endif // CARRO_H