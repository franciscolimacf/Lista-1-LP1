#include <iostream>
#include "Relogio.h"

using namespace std;

int main()
{
    Relogio rel = Relogio();

    cout << "Horario inicial: " << rel.getHora() << ":"
     << rel.getMinuto() << ":" << rel.getSegundo() << endl;

    rel.setHorario(3,48,56);

    cout << "Horario atual: " << rel.getHora() << ":"
     << rel.getMinuto() << ":" << rel.getSegundo() << endl;

     rel.avancarHora();
     rel.avancarHora();

     cout << "Horario atual: " << rel.getHora() << ":"
     << rel.getMinuto() << ":" << rel.getSegundo() << endl;

     rel.avancarHora();
     rel.avancarHora();

     cout << "Horario atual: " << rel.getHora() << ":"
     << rel.getMinuto() << ":" << rel.getSegundo() << endl;

     rel.setHorario(23,59,59);

     cout << "Horario atual: " << rel.getHora() << ":"
     << rel.getMinuto() << ":" << rel.getSegundo() << endl;

     rel.avancarHora();

     cout << "Horario atual: " << rel.getHora() << ":"
     << rel.getMinuto() << ":" << rel.getSegundo() << endl;

    return 0;
}
