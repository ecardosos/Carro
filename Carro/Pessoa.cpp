#include "Pessoa.h"

#include <iostream>
#include <string>

using namespace std;

Pessoa::Pessoa(string n, int i)
{
  n = nome;
  i = idade;
}

friend ostream &operator<<(ostream &, const Pessoa &p)
{
  output << "nome:" << p.nome << "idade:" << p.idade;
  return output;
}

string Pessoa::getNome() const
{
  return nome;
}

int Pessoa::getIdade() const
{
  return idade;
}

void Pessoa::print() const
{
  cout << nome << endl;
  cout << idade << endl;
}