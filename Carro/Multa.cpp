#include "Multa.h"

using namespace std;

Multa::Multa() : dataInfracao(Data()),
                 descricao(""),
                 valor(0)
{

}

Multa::Multa(Data d, string desc, float v) : dataInfracao(d),
                                             descricao(desc),
                                             valor(v)
{
}

Multa::Multa(const Multa& m) : dataInfracao(m.dataInfracao),
                               descricao(m.descricao),
                               valor(m.valor)
{
}

Data Multa::getDataInfracao()
{
  return dataInfracao;
}

string Multa::getDescricao()
{
  return descricao;
}

float Multa::getValor()
{
  return valor;
}