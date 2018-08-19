#ifndef PESSOAS_H
#define PESSOAS_H
#include <string>

using namespace std;

class Pessoas
{
    private:
        string nome;
        int idade;
        string telefone;

    public:

        Pessoas(string);
        Pessoas(string,int, string);

        void setNome(string);
        void setIdade(int);
        void setTelefone(string);

        string getNome();
        int getIdade();
        string getTelefone();

};


#endif // PESSOAS_H
