#include "Pessoa.h"

#include <iostream>
#include <string>

using namespace std;

ostream &operator<<(ostream &output, const Pessoa &p)
{
  output << "nome:" << p.nome
         << "data de nascimento:" << p.dataNascimento.getDia() << "/" << p.dataNascimento.getMes() << "/" << p.dataNascimento.getAno() << endl;
  return output;
}

bool Pessoa::operator==(const Pessoa &p)
{
  return nome == p.nome &&
         dataNascimento.getDia() == p.dataNascimento.getDia() &&
         dataNascimento.getMes() == p.dataNascimento.getMes() &&
         dataNascimento.getAno() == p.dataNascimento.getAno();
}

bool Pessoa::operator !=(const Pessoa &p)
{
  return nome != p.nome &&
         dataNascimento.getDia() != p.dataNascimento.getDia() &&
         dataNascimento.getMes() != p.dataNascimento.getMes() &&
         dataNascimento.getAno() != p.dataNascimento.getAno();
}

Pessoa::Pessoa()
{
  nome = "";
  dataNascimento = Data();
}

Pessoa::Pessoa(string n, Data dataNascimento) : nome(n),
                                                dataNascimento(dataNascimento)
{
}

void Pessoa::setNome(string n)
{
  nome = n;
}

string Pessoa::getNome() const
{
  return nome;
}

void Pessoa::setDataNascimento(int dia, int mes, int ano)
{
  dataNascimento.setDia(dia);
  dataNascimento.setMes(mes);
  dataNascimento.setAno(ano);
}

Data Pessoa::getDataNascimento() const
{
  return dataNascimento;
}