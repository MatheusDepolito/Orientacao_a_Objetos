#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
#include "Abstract.h"
typedef struct{
    int anos, meses,dias;
}tempoDeCasa;

using namespace  std;

class Funcionario: public Abstract{
public:
    Funcionario(string nome,int idade, const tempoDeCasa &TC);

    void setIdade(int idade);
    void setNome(string nome);
    void setTC(tempoDeCasa TC);

    string getNome();
    int getIdade();
    tempoDeCasa getTC();

    void resenha();


    virtual void rotina();
protected:
    int _idade;
    string _nome;
    tempoDeCasa _TC;
};

#endif // FUNCIONARIO_H
