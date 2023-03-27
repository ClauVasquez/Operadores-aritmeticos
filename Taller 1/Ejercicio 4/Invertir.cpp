#include <iostream>
using namespace std;
int main (){
    int num, inver=0;
    cout <<"Ingrese el numero: "<<endl;
    cin >> num;
    inver = (num%10)*100;
    num = num/10;
    inver += (num%10)*10;
    num = num/ 10;
    inver += num;
    cout << "El numero invertido es: "<< inver<<endl;
    return 0;
}