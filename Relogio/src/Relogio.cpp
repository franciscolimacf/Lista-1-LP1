#include "Relogio.h"

Relogio::Relogio()
{
    hora=0;
    minuto=0;
    segundo=0;
}
void Relogio::setHorario(int h, int m, int s){
    while(h>=24){
        h-=24;
    }
    while(m>=60){
        m-=60;
    }
    while(s>=60){
        s-=60;
    }
    hora = h;
    minuto = m;
    segundo = s;
}

int Relogio::getHora(){
    return hora;
}
int Relogio::getMinuto(){
    return minuto;
}
int Relogio::getSegundo(){
    return segundo;
}
void Relogio::avancarHora(){
    segundo++;
    if(segundo == 60){
        segundo = 0;
        minuto++;
    }
    if(minuto == 60){
        minuto = 0;
        hora++;
    }
    if(hora==24){
        hora=0;
    }
}
