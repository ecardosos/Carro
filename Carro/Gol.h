#ifndef GOL_H
#define GOL_H

#include "Carro.h" 

class Gol: public Carro
{
    friend std::ostream &operator<<(std::ostream &output, const Gol &g);
    
public:
        Gol();
};
#endif // GOL_H

