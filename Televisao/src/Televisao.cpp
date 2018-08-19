#include "Televisao.h"

Televisao::Televisao()
{
    canal=1;
    volume=40;
}
void Televisao::aumentaVolume(){
    if(volume < 100)
        volume++;
}
void Televisao::diminuiVolume(){
    if(volume > 0)
        volume--;
}
void Televisao::aumentaCanal(){
    canal++;
    if(canal == 1001)
        canal=1;
}
void Televisao::DiminuiCanal(){
    canal--;
    if(canal==0)
        canal=1000;
}
void Televisao::setCanal(int channel){
    while(channel>1000){
        channel-=1000;
    }
}
int Televisao::getCanal(){
    return canal;
}
int Televisao::getVolume(){
    return volume;
}
