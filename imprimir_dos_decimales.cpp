//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

//debemos incluir la biblioteca iomanip para poder mostrar la cantidad de decimales que necesitamos;

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float n1, n2, total;

    cout << "Ingrese un numero: " << endl;
    cin >> n1;

    cout << "Ingrese otro numero: " << endl;
    cin >> n2;
    if(n2 == 0){
        cout << "Valores no validos";
        return 100;
    }

    total = n1 / n2;

    //Mostramos el resultado con los siguientes comandos
    cout << "El resultado es: " << fixed << setprecision(2) << total << endl;



	return 0;
}
