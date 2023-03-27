#include <iostream>
using namespace std;
int main(){
    float pesos,dolar,euro,bolivar;
    cout <<"digite el valor en pesos: "<<endl;
    cin>>pesos;
    dolar=pesos/2500;
    euro=pesos/3000;
    bolivar=pesos/0.52;
    cout<<"Son "<< dolar <<" dolares."<<endl;
    cout<<"Son "<< euro <<" euros"<<endl;
    cout<<"Son  "<< bolivar <<" bolivares"<<endl;
    return 0;

}
