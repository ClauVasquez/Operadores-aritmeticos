#include <iostream>
using namespace std;
int main(){
    double inver1, inver2,inver3, total, porcen1, porcen2, porcen3;
    cout <<"Cuanto dinero ingresa la primer persona: "<<endl;
    cin >> inver1;
    cout <<"Cuanto dinero ingresa la segunda persona: "<<endl;
    cin >> inver2;
    cout <<"Cuanto dinero ingresa la tercer persona: "<<endl;
    cin >> inver3;
    total= inver1+inver2+inver3;
    porcen1=(inver1/total)*100;
    porcen2=(inver2/total)*100;
    porcen3=(inver3/total)*100;
    cout <<"El porcentaje que invierte la primera persona es: "<<porcen1<<endl;
    cout <<"El porcentaje que invierte la secunda persona es: "<<porcen2<<endl;
    cout <<"El porcentaje que invierte la tercer persona es: "<<porcen3<<endl;

    return 0;
}