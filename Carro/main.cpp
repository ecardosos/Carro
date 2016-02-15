#include <iostream>
#include <string>

using namespace std;

#include "Carro.h"

int main(int argc, char **argv)
{
	Carro carro01;
	
	carro01.aceleracao();
	
	cout<<"Velocidade: "<<carro01.getVelocidade()<<endl;
	
	carro01.freio();
	
	cout<<"Velocidade: "<<carro01.getVelocidade()<<endl;
	
	
	return(0);	
}


