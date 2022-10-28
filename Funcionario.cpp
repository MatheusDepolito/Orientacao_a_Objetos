#include "Funcionario.h"

Funcionario::Funcionario(string nome, int idade, const tempoDeCasa &TC)
{
    this->_nome = nome;
    this->_idade = idade;
    this->_TC.anos = TC.anos;
    this-> _TC.dias = TC.dias;
    this->_TC.meses = TC.meses;
}

void Funcionario::setNome(string nome){

    if(nome == _nome)
        return;

    _nome = nome;
}

void Funcionario::setIdade(int idade){

    if(idade == _idade)
        return;

    _idade = idade;
}

void Funcionario::setTC(tempoDeCasa TC){

    if(TC.dias == _TC.dias && TC.meses == _TC.meses && TC.anos == _TC.anos)
        return;

    _TC.dias = TC.dias;
    _TC.meses = TC.meses;
    _TC.anos = TC.anos;
}

string Funcionario::getNome(){
    return _nome;
}

int Funcionario::getIdade(){
    return _idade;
}

tempoDeCasa Funcionario::getTC(){
    return _TC;
}

void Funcionario::resenha()
{
    if(_TC.anos > 1){
        cout << "Promovido" << endl;
    }
    else{
        cout << "Nao promovido" << endl;
    }
}

void Funcionario::rotina()
{
    cout << getNome() <<" Fazer manuntecoes em geral e terminar atividades inacabadas." << endl;
}


