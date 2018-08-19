#ifndef RELOGIO_H
#define RELOGIO_H


class Relogio
{
private:
    int hora;
    int minuto;
    int segundo;

public:
    Relogio();

    void setHorario(int, int, int);

    int getHora();
    int getMinuto();
    int getSegundo();

    void avancarHora();
};

#endif // RELOGIO_H
