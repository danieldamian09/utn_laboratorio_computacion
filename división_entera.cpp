//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){
    //Division entera

    int libros;
    int hermanos;
    int resultado;
    int resto;

    cout << "Ingrese la cantidad de libros: ";
    cin >> libros;

    cout << "Ingrese la cantidad de hermanos: ";
    cin >> hermanos;

    resultado = libros / hermanos;

    cout << "Le corresponden a cada uno: " << resultado << endl;

    resto = libros % hermanos;

    cout << "El resto de los libros es: " << resto;



	return 0;
}
