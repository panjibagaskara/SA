#include "SA.h"
double hitungfungsi(double x1, double x2){
    return -(abs((sin(x1)*cos(x2)*exp(abs(1-(sqrt((x1*x1 + x2*x2))/PI))))));
}
double kemungkinan(double delta, double temp){
    return exp((-delta)/temp);
}
double randomNomor(){
    return ((rand()%200000)-100000)*0.0001;
}
