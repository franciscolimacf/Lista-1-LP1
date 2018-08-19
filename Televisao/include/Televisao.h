#ifndef TELEVISAO_H
#define TELEVISAO_H


class Televisao
{
private:
    int canal;
    int volume;

public:
    Televisao();

    void aumentaVolume();
    void diminuiVolume();

    void aumentaCanal();
    void DiminuiCanal();

    void setCanal(int);

    int getCanal();
    int getVolume();

};

#endif // TELEVISAO_H
