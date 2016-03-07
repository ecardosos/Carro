#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <ostream>
#include <iostream>

class Pessoa
{
friend std::ostream &operator<<(std::ostream &output, const Pessoa &p)

public:
  Pessoa(std::string n, int i);

  std::string getNome() const;
  int getIdade() const;

  void print() const;

private:
  std::string nome;
  int idade;
};

#endif // PESSOA_H
