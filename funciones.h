#include <iostream>
#include <conio.h>
#include <math.h>
#include <string>
using namespace std;

void terreno ()
{
    float totalPagar = 0.0f;
    float perimetro = 0.0f;
    float cantidad = 0.0f;

    float ancho =0.0f;
    float largo = 0.0f;
    float precio = 0.0f;

    //entradas

    cout << " Dame el ancho del terreno: ";
    cin >> ancho;
    cout << " Dame lo largo del terreno: ";
    cin >> largo;
    cout << " Dame el precio del alambre: ";
    cin >> precio;

    //proceso
    perimetro = (ancho*2) + (largo*2);
    cantidad = perimetro * 5;
    totalPagar = cantidad * precio;

    //salida
    cout << " El perimetro : " <<  perimetro << endl << " Cantidad: " << cantidad << endl <<" Total a pagar: " << totalPagar << endl;
}

void cotizacion()
{
    float precio = 0.0f;
    float porcentajePI = 0.0f;
    float plazo = 0.0f;

    float pagoI = 0.0f;
    float totalF = 0.0f;
    float pagoM = 0.0f;
    

    //entrada

    cout << " precio del automovil: ", cin >> precio;
    cout << "porcentaje del pago inicial",cin>> porcentajePI;
    cout << "el plazo",cin >> plazo;

    //proceso

    pagoI = precio * (porcentajePI/100);
    totalF = precio - pagoI;
    pagoM = totalF/plazo;

    //salida

    cout << " El pago inicial es de " << pagoI << endl <<" El total a pagar es de " << totalF << endl << " El pago mensual es de " << pagoM << endl;

}

void imc(){

    float peso = 0;
    float altura = 0;
    float imc = 0;
    
    //entrada

    cout << " cuanto pesas? ", cin >> peso;
    cout << " cual es tu altura? ", cin >> altura;

    //proceso

    imc = peso/pow(altura, 2);
    if (imc > 30.0)
    {
        cout << " persona con obesidad " << endl;
    }
    else if (imc < 18.5)
    {
        cout << " persona con bajo peso" << endl;
        cout << imc << endl;
    }
    
}

void boleto(){
    int numeroB = 0;
    string nombre;
    int yearsC = 0;
    string destino;
    int tipoV = 0;

    float precio = 0;
    float subT = 0; 
    float descuento = 0; 
    float impuesto = 0;
    float subTConD = 0; 
    float totalP = 0;

    //entrada

    cout << " numero de boleto: ", cin >> numeroB;
    cin.ignore();
    cout <<" nombre ";
    getline(cin , nombre);
    cout << " years completed",cin >> yearsC;
    cin.ignore();
    cout << " destino ";
    getline(cin , destino);
    cout << " tipo de viaje ", cin >> tipoV;
    cout << " precio ",cin >> precio;

    //proceso

    if (tipoV == 1)
    {
        subT = precio;
    }
    else
    {
        subT = precio * 1.80;
    }
    if (yearsC < 60)
    {
        descuento=0;
    }
    else{
        descuento = subT * 0.5;
    }
    subTConD = subT - descuento;
    impuesto = subTConD * 0.16;
    totalP = subTConD + impuesto;

    //salida

    cout << " numero de boleto: " << numeroB << endl;
    cout <<" nombre " << nombre << endl;
    cout << " years completed" << yearsC << endl;
    cout << " destino " << destino << endl;
    cout << " tipo de viaje " << tipoV << endl;
    cout << " precio " << precio << endl;
    cout << " subtotal " << subT << endl;
    cout << " descuento " << descuento << endl;
    cout << " impuesto " << impuesto << endl;
    cout << " total final " << totalP << endl;

}

int menu(){
    int opcion = 0;
    cout << "1. Terreno" << endl;
    cout << "2. Cotizacion" << endl;
    cout << "3. IMC" << endl;
    cout << "4. Boletos" << endl;
    cout << "5. salida" << endl << endl;
    cin >> opcion;
    return opcion;
}