#include "Pessoa.h"
#include <iostream>
#include <string>

using namespace std;

Pessoa::Pessoa(string nome){

    this->nome = nome;
}
Pessoa::Pessoa(string nome, string telefone, int idade){

    this->nome = nome;
    this->telefone = telefone;
    this->idade = idade;

}

void Pessoa::setNome(string nome) {
    this->nome = nome;
}
string Pessoa::getNome() {
    return nome;
}
void Pessoa::setTelefone(string telefone) {
    this->telefone = telefone;
}
string Pessoa::getTelefone() {
    return telefone;
}
void Pessoa::setIdade(int idade) {
    this->idade = idade;
}
int Pessoa::getIdade() {
    return idade;
}
