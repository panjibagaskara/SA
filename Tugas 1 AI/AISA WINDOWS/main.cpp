#include <iostream>
#include "SA.h"

using namespace std;

int main()
{
    double new_x1, new_x2, new_hasil, delta, ran;
    srand(time(0));
    double x1 = randomNomor();
    double x2 = randomNomor();
    double hasil = hitungfungsi(x1,x2);
    double temp = 100;
    double temp_awal = temp;
    double temp_pas;
    while (temp > 0.001){
        double i = 100;
        while (i>temp){
            new_x1 = randomNomor();
            new_x2 = randomNomor();
            new_hasil = hitungfungsi(new_x1,new_x2);
            delta = new_hasil - hasil; //-19 - (-17) = -19 +17 = -2
            if (delta<0){
                x1 = new_x1;
                x2 = new_x2;
                hasil = new_hasil;
                temp_pas = temp;
            }else{
                ran = (rand()%100000)*0.00001;
                if (kemungkinan(delta,temp)>ran){
                    x1 = new_x1;
                    x2 = new_x2;
                    hasil = new_hasil;
                    temp_pas = temp;
                }
            }
            i = i - 0.001;
        }
        temp = temp * 0.99;
        //Sleep(1000);
    }
    cout << "Nilai x1       : " << x1 <<endl;
    cout << "Nilai x2       : " << x2 <<endl;
    cout << "Nilai hasil    : " << hasil <<endl;
    cout << "Nilai temp awal: " << temp_awal <<endl;
    cout << "Nilai temp     : " << temp_pas <<endl;
    cout << endl;
    cout << "===========================" << endl;
    cout << endl;
    return 0;
}
