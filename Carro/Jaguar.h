#ifndef JAGUAR_H
#define JAGUAR_H

class Jaguar: public Carro
{
    friend std::ostream &operator<<(std::ostream &output, const Jaguar &j); 
    
public:
  Jaguar();
  Jaguar(const Jaguar &);
    
  Jaguar & operator=(const Jaguar &j);
  
  void setArCondicionadoOn(bool onOff);
  bool getArCondicionadoOn();
    
  void setTravaPorta(bool onOff);
  bool getTravaPorta();

private:
  bool acOnOff;
  bool travaOnOff;
};

#endif // JAGUAR_H
