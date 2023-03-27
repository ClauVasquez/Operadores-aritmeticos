#include <iostream>
using namespace std;
int main (){
    double kmh,t,x;
    cout<<"Ingrese la velocidad en km/h: "<<endl;
    cin>>kmh;
    cout<<"ingrese el tiempo en horas: "<<endl;
    cin>>t;
    x=(kmh*t*1000)/3600;
    cout<<"La distancia recorrida fue: "<<x<<" m"<<endl;
    return 0;
}