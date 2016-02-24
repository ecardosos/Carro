#ifndef DATA_H
#define DATA_H

class Data
{
public:
  Data(int dia, int mes, int ano);

  int validacaoData();

  void print() const;

private:
  int dia;
  int mes;
  int ano;

  static const int diasPorMes[13];
};

#endif // DATA_H