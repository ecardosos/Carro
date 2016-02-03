#ifndef CARRO_H
#define CARRO_H

class Carro
{
public:
    Carro();
    ~Carro();
	void aceleracao();
	void freio();
	void getVelocidade();

private:
	int velocidade;
	string cor;
    static string injEleVesion;
};

#endif // CARRO_H
