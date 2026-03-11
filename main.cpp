/*
Sistema: Gestion de pedidos de una cafeteria
Realizado por :Toainga Toapanta Snaider Alexander

Descripcion:
Este archivo contiene la funcion principal del programa (main).
Desde aqui se ejecuta el sistema y se controla el menu principal.

El programa permite gestionar pedidos de una cafeteria utilizando
un vector de estructuras, donde cada posicion del vector almacena
la informacion de un pedido.

El archivo main.cpp solo se encarga de ejecutar el menu y llamar
a las funciones que realizan la logica del sistema.
*/

#include "cafeteria.h"

int main(){

    int opcion;

    inicializarPedidos(); // Carga los 10 pedidos iniciales del sistema

    do{

        mostrarMenu();

        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion){

            case 1:
                registrarPedido();
                break;

            case 2:
                mostrarPedidos();
                break;

            case 3:
                buscarPedido();
                break;

            case 4:
                modificarPedido();
                break;

            case 5:
                eliminarPedido();
                break;

            case 6:
                generarReporte();
                break;

            case 7:
                cout << "Saliendo del sistema...\n";
                break;

            default:
                cout << "Opcion invalida\n";

        }

    }while(opcion != 7);

    return 0;
}
