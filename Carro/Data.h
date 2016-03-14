#ifndef DATA_H
#define DATA_H

class Data
{
public:
  Data(int d = 1, int m = 1, int a = 1900);

  int validacaoData(int dia);

  void print() const;

  void setDia(int diaIn) { dia = validacaoData(diaIn); }
  void setMes(int mesIn) { if (mesIn >= 1 && mesIn <= 12) mes = mesIn; }
  void setAno(int anoIn) { if (anoIn >= 0) ano = anoIn; }

  int getDia() const;
  int getMes() const;
  int getAno() const;

private:
  int dia;
  int mes;
  int ano;

  static const int diasPorMes[13];
};

#endif // DATA_H