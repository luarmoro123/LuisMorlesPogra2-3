#include <iostream>
#include <conio.h>
#include "funciones.h"
using namespace std;

int main()
{
    int opcion=0;
    do
    {
        system("cls");
        opcion = menu();
        switch (opcion)
        {
        case 1:
            terreno();
            break;
        case 2:
            cotizacion();
            break;
        case 3:
            imc ();
            break;
        case 4:
            boleto();
            break;
        case 5:
            cout << "gracias por usar el pograma";
            break;
        default:
            cout << "No se una opcion valida";
            break;
        }

        cout << " \n Oprima cualquier letra para continual" ;
        char tecla;
        tecla = getch();


    } while (opcion!=5);
    
    return 0;
}
