#ifndef DESENVOLVEDOR_H
#define DESENVOLVEDOR_H

#include "Funcionario.h"

class Desenvolvedor: public Funcionario
{
public:
    Desenvolvedor(string nome, int idade, const tempoDeCasa &TC);

    void rotina();
};

#endif // DESENVOLVEDOR_H
