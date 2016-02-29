#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <ostream>
#include <iostream>

class Pessoa
{
public:
  Pessoa(std::string n, int i);

  friend std::ostream &operator<<(std::ostream &output, const Pessoa &p)
  {
    output << "nome:" << p.nome << "idade:" << p.idade;
    return output;
  }

  std::string getNome() const;
  int getIdade() const;

  void print() const;

private:
  std::string nome;
  int idade;
};

#endif // PESSOA_H
