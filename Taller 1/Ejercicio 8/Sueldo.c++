#include <iostream>
using namespace std;
int main (){
    int sueldo, comi1,comi2,comi3,comision,por,total;
    cout <<"Cuanto es su sueldo base: "<<endl;
    cin>>sueldo;
    cout <<"Valor de cada venta realizada: "<<endl;
    cin>>comi1;
    cin>>comi2;
    cin>>comi3;
    comision=comi1+comi2+comi3;
    por=comision*0.1;
    total=por+sueldo;
    cout<<"Su comision es: "<<por<<endl;
    cout<<"El total de sueldo base + comisiones es: "<<total<<endl;
    return 0;

}