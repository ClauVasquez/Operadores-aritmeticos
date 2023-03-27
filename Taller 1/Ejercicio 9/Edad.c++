#include <iostream>
using namespace std;
int main(){
    int nac,act,total;
    cout<<"En que año nacio: "<<endl;
    cin>>nac;
    cout<<"Año actual: "<<endl;
    cin>>act;
    total=act-nac;
    cout<<"Tienes "<<total<< " años."<<endl;
    return 0;
}