#include "PassagemMetro.h"

#include <iostream>

using namespace std;

static unsigned int s_numCartoes = 0;

PassagemMetro::PassagemMetro() : _idCartao(s_numCartoes), _creditos(0), _avulso(false)
{
  s_numCartoes++;
}

PassagemMetro::PassagemMetro(bool avulso) : _creditos(0), _avulso(avulso)
{
  _idCartao = s_numCartoes;
  s_numCartoes++;
}

PassagemMetro::PassagemMetro(float creditos) : _creditos(creditos), _avulso(false)
{
  _idCartao = s_numCartoes;
  s_numCartoes++;
}

void PassagemMetro::adicionarCreditos(float creditos)
{
  _creditos += creditos;
}

void PassagemMetro:: deduzirCreditos(float valPassagem)
{
  _creditos -= valPassagem;
}