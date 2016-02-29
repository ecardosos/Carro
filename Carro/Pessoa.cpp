#include "Pessoa.h"

#include <iostream>
#include <string>

using namespace std;

Pessoa::Pessoa(string n, int i)
{
  n = nome;
  i = idade;
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