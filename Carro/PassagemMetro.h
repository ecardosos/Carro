#ifndef PASSAGEMMETRO_H
#define PASSAGEMMETRO_H

class PassagemMetro {
public:
  PassagemMetro();
  PassagemMetro(bool avulso);
  PassagemMetro(float credits);

  void adicionarCreditos(float creditos);
  void deduzirCreditos(float valPassagem);

private:
  static unsigned int s_numCartoes;
  unsigned int _idCartao;
  float _creditos;
  bool _avulso;
};

#endif // PASSAGEMMETRO_H