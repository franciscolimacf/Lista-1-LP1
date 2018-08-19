#include <iostream>
#include "Pessoas.h"

using namespace std;

int main()
{
    Pessoas lucas = Pessoas("Lucas");
    Pessoas kejo = Pessoas("Bruno", 19, "91233-4567");

    cout << "Nome: " << lucas.getNome() << endl;
    cout << "Idade: " << lucas.getIdade() << endl;
    cout << "Telefone: " << lucas.getTelefone() << endl;

    cout << "------------------" << endl;

    cout << "Nome: " << kejo.getNome() << endl;
    cout << "Idade: " << kejo.getIdade() << endl;
    cout << "Telefone: " << kejo.getTelefone() << endl;




    return 0;
}
