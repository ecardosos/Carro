#ifndef CARRO_H
#define CARRO_H

class Carro
{
public:
    Carro();
    ~Carro();
	void aceleracao();
	void freiar();
	void getVelocidade();
	static string injEleVesion;

private:
	int velocidade;
	string cor;
};

#endif // CARRO_H
