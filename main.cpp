#include <iostream>
#include "Pessoa.h"
#include <string>

using namespace std;

int main()
{
        Pessoa pessoa1 = Pessoa("Nathalia", "9 9999-9999", 28);
        Pessoa pessoa2 = Pessoa("Derzu", "9 1234-5678", 30);
        Pessoa pessoa3 = Pessoa("Maria", "5 4321-1237", 57);
        Pessoa pessoa4 = Pessoa("Joao", "8 8394-5938", 15);

        cout << "______________________________________" << endl;
        cout << "          CADASTRO DE PESSOAS         " << endl;
        cout << "______________________________________" << endl;
        cout << " " << endl;
        cout << "Nome: " << pessoa1.getNome() << endl;
        cout << "Idade: " << pessoa1.getIdade() << " anos" << endl;
        cout << "Telefone: " << pessoa1.getTelefone() << endl;
        cout <<"--------------------------------------" << endl;
        cout << "Nome: " << pessoa2.getNome() << endl;
        cout << "Idade: " << pessoa2.getIdade() << " anos" << endl;
        cout << "Telefone: " << pessoa2.getTelefone() << endl;
        cout <<"--------------------------------------" << endl;
        cout << "Nome: " << pessoa3.getNome() << endl;
        cout << "Idade: " << pessoa3.getIdade() << " anos" << endl;
        cout << "Telefone: " << pessoa3.getTelefone() << endl;
        cout <<"--------------------------------------" << endl;
        cout << "Nome: " << pessoa4.getNome() << endl;
        cout << "Idade: " << pessoa4.getIdade() << " anos" << endl;
        cout << "Telefone: " << pessoa4.getTelefone() << endl;
        cout <<"--------------------------------------" << endl;


    return 0;
}
