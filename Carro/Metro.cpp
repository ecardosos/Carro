#include "Metro.h"

#include <iostream>

using namespace std;

static const float s_valPassagem = 5.5;

ostream &operator<<(ostream &output, const Metro &m)
{
  output << "número de assentos de primeira classe:" << m.primClasse;
  output << "número de assentos de segunda classe com ar condicionado:" << m.acSegClasse;
  output << "número de assentos de segunda classe sem ar condicionado:" << m.noAcSegClasse;

  return output;
}


Metro::Metro() : primClasse(0), acSegClasse(0), noAcSegClasse(0)
{

}

Metro::Metro(int primClass, int acSegClass, int noAcSegClass)
{
  primClasse = primClass;
  acSegClasse = acSegClass;
  noAcSegClasse = noAcSegClass;
}

Metro::Metro(const Metro &outro)
{
  primClasse = outro.primClasse;
  acSegClasse = outro.acSegClasse;
  noAcSegClasse = outro.noAcSegClasse;
}

Metro & Metro::operator=(const Metro &m)
{
  if (&m != this)
  {
    primClasse = m.primClasse;
    acSegClasse = m.acSegClasse;
    noAcSegClasse = m.noAcSegClasse;
  }

  return *this;
}

void Metro::aceleracao()
{
  velocidade = 100;
}

void Metro::freio()
{
  velocidade = 0;
}

void Metro::comprarCreditos(PassagemMetro p)
{
  float creditos;  cout << "Insira a quantidade de créditos a ser adicionada:"; 
  cin >> creditos;  
  p.adicionarCreditos(creditos);
}

PassagemMetro Metro::comprarPassagem()
{
  int cod;
  cout << "Olá, \n";
  cout << "Digite 1 se você deseja utilizar um ticket.\n";
  cout << "Digite 2 se você deseja adicionar créditos.\n";
  cin >> cod;

  switch(cod)
  {
  case 1:
    return PassagemMetro(true);

  case 2:
    float creditos;
    cout << "Quanto deseja adicionar?\n";
    cin >> creditos;
    return PassagemMetro(creditos);

  default:
    cout << "Código inválido.";
  }
}

int Metro::getCapacidade()
{
  return primClasse + acSegClasse + noAcSegClasse;
}

bool Metro::validacao()
{

}