#include <iostream>
using namespace std;
int main(){
    float mcm,mkm,mp,mps,cm, km,pies,pulgadas;
    cout<<"Ingrese los metros a convertir en cm: "<<endl;
    cin >> mcm;
    cout<<"Ingrese los metros a convertir en km: "<<endl;
    cin >> mkm;
    cout<<"ingrese los metros a convertir en pulgadas: "<<endl;
    cin>>mp;
    cout<<"ingrese los metros a convertir a pies: "<<endl;
    cin>>mps;
    cm=mcm*100;
    km=mkm/1000;
    pulgadas=mp*39.37;
    pies=mps*3.28;
    cout <<"los metros en centimetros son: "<< cm <<endl;
    cout <<"los metros en kilometros son: "<< km <<endl;
    cout <<"los metros en pulgadas son: "<< pulgadas <<endl;
    cout<<"los metros en pies son: "<<pies<<endl;
    return 0;
}