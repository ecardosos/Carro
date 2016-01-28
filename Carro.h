#ifndef CARRO_H
#define CARRO_H

class Carro
{
public:
	void aceleracao();
	void freiar();
	void decidirCor();

private:
	int velocidade;
	string cor;
	

};

#endif // CARRO_H
