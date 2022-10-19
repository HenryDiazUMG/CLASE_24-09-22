#include <iostream>
#include <stdlib.h>
#include <fstream>  // LIBRERIA OARA EL MANEJO DE ARCHIVOS

using namespace std;

void escribir(); // FUNCION A CREAR MAS ADELANTE

int main()
{
    escribir();

    system("pause");
    return 0;
}

void escribir()
{

    ofstream miarchivo; //VARIABLE TIPO ARCHIVO (SIRVE PARA REPRESENTAR EL FLUJO DE CREACION Y ESCRITURA EN EL ARCHIVO A CREAR)
    miarchivo.open("MI PRIMER ARCHIVO.txt", ios::out);

    if (miarchivo.fail())
    {
        cout << "Eror al abrir el archivo";
        exit(1);
    }

    miarchivo << "HOY ES UN DIA GENIAL";

    miarchivo.close();
   
}