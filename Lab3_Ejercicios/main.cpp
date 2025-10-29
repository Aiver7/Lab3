#include <iostream>
#include "tools.h"
using namespace std;

int main()
{
    int option = menu();    // Opcion que tomo el usuario
    string file_input;     // Nombre del archivo que se codificara
    string file_output;   // Nombre del archivo codificado
    int seed; // Semilla de codificacion

    cout << "Ingrese el nombre del archivo a codificar\n : ";
    cin >> file_input;

    system("cls"); // Se limpia la consola

    cout << "Ingrese la semilla de codificacion\n :  ";
    cin >> seed;

    system("cls"); // Se limpia la consola

    cout << "Ingrese el nombre para el archivo codificado\n : ";
    cin >> file_output;

    system("cls");

    if(option == 1){
        // Se codifica el archivo usando el primer metodo
        write(file_output, first_method(read(file_input), seed));
    }else{
        // Se codifica el archivo usando el segundo metodo
        write(file_output, second_method(read(file_input), seed));
    }

    cout << "El archivo " << file_input << " has sido codificado con exito.\n" RESET << endl;

    return 0;
}
