#ifndef PESSOA_H
#define PESSOA_H

#include "Data.h"

#include <string>
#include <ostream>
#include <iostream>

class Pessoa
{
  friend std::ostream &operator<<(std::ostream &output, const Pessoa &p);
  bool operator==(const Pessoa &p);
  bool operator!=(const Pessoa &p);

public:
  Pessoa();
  Pessoa(std::string n, Data dataNascimento);

  void setNome(std::string n);
  std::string getNome() const;

  void setDataNascimento(int dia, int mes, int ano);
  Data getDataNascimento() const;

private:
  std::string nome;
  Data dataNascimento;
};

#endif // PESSOA_H
