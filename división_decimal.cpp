//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){
    //Division entera

    int dinero;
    int personas;
    float resultado;

    cout << "Ingrese la cantidad de dinero: ";
    cin >> dinero;

    cout << "Ingrese la cantidad de hermanos: ";
    cin >> personas;

    // Para que nos pueda dar el resultado exacto hacemos un casteo ya que una de las variables tiene que ser float
    resultado = (float)dinero / personas;

    cout << "Le corresponden a cada uno: " << resultado << endl;


	return 0;
}
