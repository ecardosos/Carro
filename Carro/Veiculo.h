#ifndef VEICULO_H
#define VEICULO_H

#include "Pessoa.h"

#include <string>

class Veiculo
{
  friend std::ostream &operator<<(std::ostream &output, const Veiculo &v);
  
public:
  Veiculo(const Veiculo &);
  Veiculo(std::string cor);
  Veiculo();

  Veiculo & operator=(const Veiculo &v);

  void aceleracao();
  void freio();
  int getVelocidade();

  void setDono(Pessoa* nome);
  
  bool operator==(const Veiculo &v);

private:
  int velocidade;
  float velocidadeMax;

  std::string cor;

  static const std::string verInjecaoEletronica;

  Pessoa* dono;
  };

#endif // VEICULO_H