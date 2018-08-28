#include <iostream>
#include <cmath>
using namespace std;

int a;
int b;
float r;
int e;
float radian;
float sexdeg;
const double pi = acos(-1.0);

int main() {
    cout << "Ingrese dos números enteros: ";
    cin >> a >> b;
    r = a*1.0/b;
    e = a/b;
    cout<< "División entera: "<< e << endl;
    cout<< "División real: "<< r << endl;

    cout << "Ingrese un ángulo en radianes: ";
    cin >> radian;
    sexdeg = (radian/ pi)*180;
    cout << "Esto es igual a "<< sexdeg << "°";

    return 0;
}
