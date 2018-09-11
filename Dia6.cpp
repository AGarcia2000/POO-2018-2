#include <iostream>
using namespace std;
int i=1;
int Sp,Si,cont;


void Proceso(int &numero, int &contador,  int &Sumapar,  int &Sumaimpar){
    while(numero != 0){
        cin >> numero;
        if (numero!= 0) contador++;
        else break;
        if(numero%2 == 0) Sumapar++;
        if(numero%2 != 0) Sumaimpar++;
    }
    return;
}
int main() {
    Proceso(i, cont, Sp, Si);
    cout << cont << endl;
    cout <<Sp<<endl;
    cout <<Si<<endl;

    return 0;
}
