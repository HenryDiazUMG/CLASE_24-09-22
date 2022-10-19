//Calculo de la hipotenusa y validacion de numeros positivos



#include <iostream> // biblioteca estandar que permite entradas/salidas en pantalla
#include <math> 

using namespace std;

int main (){

   float cateto1, cateto2, hipotenusa; //Declaracion de variables de tipo decim

   cout << " CALCULAR LA HIPOTENUSA " << endl;

   cout << " INGRESE LA MEDIDA DE LOS CATETOS A & B " << endl;
   Cout << " INGRESAR CATETO A:" << endl1;
   cin >> cateto1;


   cout << " INGRESAR CATETO B:" << endl;
   cin >> cateto2;

   /* VALIDAR QUE LOS NUMEROS INGRESADOS SEAN POSITIVOS*/

   if ( cateto1 >0 && cateto2 >0 )
   {
       hipotenusa = sqrt (pow(cateto1,2.0) + pow (cateto2, 2.0) );
       cout << " EL VALOR DE LA HIPOTENUSA ES: " << endl1;

   }

   else
    {
        cout << " POR FAVOR DEBE INGRESAR UNICAMENTE NUMEROS POSITIVOS " << endl1;
   }

system ("PAUSE");

}
