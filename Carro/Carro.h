#ifndef CARRO_H
#define CARRO_H

#include "Pessoa.h"
#include "Data.h"

#include <string>

class Carro
{
public:
  Carro(const Carro &);
  Carro(std::string cor);

  Carro & operator=(const Carro &c);

  void aceleracao();
  void freio();
  int getVelocidade();

  void setMotorista(Pessoa* nome);
  void setDono(Pessoa* nome);
  
  bool operator==(const Carro &c);

private:
  int velocidade;

  std::string cor;

  static const std::string verInjecaoEletronica;

  Pessoa* motorista;
  Pessoa* dono;
  };

#endif // CARRO_H