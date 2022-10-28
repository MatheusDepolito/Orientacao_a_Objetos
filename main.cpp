#include <iostream>
#include "Funcionario.h"
#include "Desenvolvedor.h"
using namespace std;

int main()
{
    Funcionario d = Funcionario("Matheus",20,{10,20,30});
    Desenvolvedor p = Desenvolvedor("Fernando",30,{0,30,40});


//    Funcionario* e1 = &d;
//    Funcionario* e2 = &p;
//    e1->rotina();
//    e1->resenha();
//    e2->rotina();
//    e2->resenha();


    return 0;
}
