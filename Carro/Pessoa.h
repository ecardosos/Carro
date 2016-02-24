#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <iostream>

class Pessoa
{
  friend ostream &operator<<(ostream &, const Pessoa &p);

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
