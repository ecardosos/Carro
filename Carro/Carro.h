#ifndef CARRO_H
#define CARRO_H

#include "Pessoa.h"
#include "Registro.h"

#include <string>

class Carro
{
public:
  Carro(const Carro &);
  Carro(Pessoa* d, Registro* r, std::string c);

  Carro & operator=(const Carro &c);

  void aceleracao();
  void freio();
  int getVelocidade();

  void setDono(Pessoa* nome);
  
  bool operator==(const Carro &c);

private:
  int velocidade;

  std::string cor;

  static const std::string verInjecaoEletronica;

  Registro* registro;
  Pessoa* dono;
  };

#endif // CARRO_H