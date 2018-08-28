#include <iostream>
#include <cmath>
using namespace std;

char input;
int n;
const double pi = acos(-1.0);

int main() {
    int x=0;
    int y=0;

    cout << "Bienvenido, este programa te podra simular el movimiento de un objeto en un plano." << endl << "El objeto se mueve un espacio a la vez en la dirección seleccionada.";
    cout << endl << "Las posibles direcciones son N,S,E y O (norte, sur, este y oeste respectivamente)." << endl;

    cout<< "Ingrese las coordenadas iniciales:" << endl << "x=";  cin >> x ; cout << "y="; cin >> y;
    cout << "La posición inicial es: (" << x << ',' << y << ')' << endl << endl;
    int x0 = x;
    int y0 = y;

    cout << "Seleccione número de movimientos: ";
    cin >> n;

    int a=1;

    while (a<=n) {

        cout << "Seleccione dirección del movimiento #" << a << ": ";
        cin >> input;
        if (input == 'N') y++;
        else {
            if (input == 'S') y--;
            else {
                if (input == 'E') x++;
                else {
                    if (input == 'O') x--;
                    else {
                        cout << "No es una dirección permitida" << endl;
                        a--;
                    }
                }
            }
        }
        a++;
    }
    cout << endl << "La posición final es: (" << x << ',' << y << ')' << endl;
    int deltax=x-x0;
    int deltay=y-y0;
    float desp=0;
    float sqrsum = (deltax*deltax)+(deltay*deltay);
    desp= pow(sqrsum,0.5);
    cout << "El desplazamiento fue de "<< desp << " unidades a ";
    float ratio= (deltay/desp);
    float radian = acos(ratio);
    float sexdeg = (radian/ pi)*180;
    if (x0>x) sexdeg=360-sexdeg;
    cout << sexdeg << "°" << endl<<endl;


    char adios;
    cout << "¿Nuevo movimiento?"<<endl<<endl<<"Ingrese 1 para continuar; de lo contario, ingrese cualquier otra cosa para finalizar el programa.";
    cin >> adios;
    cout << "----------------------------------------"<<endl<<endl<<"----------------------------------------"<<endl;
    if (adios == '1') main();
    else {
        adios=' ';
    }

    return 0;
}
