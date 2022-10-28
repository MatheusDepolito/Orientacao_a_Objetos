#include "Desenvolvedor.h"

Desenvolvedor::Desenvolvedor(string nome, int idade, const tempoDeCasa &TC)
    :Funcionario(nome,idade,TC)
{}

void Desenvolvedor::rotina()
{
    cout << getNome() <<" Fazer tasks diarias e implementando atualizacoes no codigo." << endl;
}
