#ifndef CAMINHAO_H
#define CAMINHAO_H

class Caminhao: public Veiculo
{
  friend std::ostream &operator<<(std::ostream &output, const Caminhao &c);
  
public:
  Caminhao();
  float getCapacidadeMax();
  
private:
  float capacidadeMax;
  };
#endif // CAMINHAO_H