/*
Este archivo contiene la implementacion de todas las funciones
del sistema de gestion de pedidos de la cafeteria.
Aqui se desarolla toda la logica del programa, incluyendo:
- Inicializar los pedidos
- Registrar nuevos pedidos
- Mostrar pedidos
- Buscar pedidos
- Modificar pedidos
- Eliminar pedidos
- Generar un reporte final

Las funciones trabajan utilizando un vector de estructuras
que almacena la informacion de cada pedido.
*/

#include "cafeteria.h"

// Vector que almacena los pedidos
Pedido pedidos[MAX];

// Contador de pedidos (inicia con 10)
int totalPedidos = 10;

// Función que carga los 10 registros iniciales
void inicializarPedidos() {

    pedidos[0] = {1,"Juan","Cafe",2,1.50};
    pedidos[1] = {2,"Ana","Capuccino",1,2.00};
    pedidos[2] = {3,"Luis","Te",3,1.20};
    pedidos[3] = {4,"Pedro","Latte",2,2.50};
    pedidos[4] = {5,"Sofia","Cafe",1,1.50};
    pedidos[5] = {6,"Maria","Te",2,1.20};
    pedidos[6] = {7,"Carlos","Capuccino",1,2.00};
    pedidos[7] = {8,"Lucia","Latte",3,2.50};
    pedidos[8] = {9,"David","Cafe",2,1.50};
    pedidos[9] = {10,"Elena","Te",1,1.20};

}

// Mostrar menú
void mostrarMenu(){

    cout << "\n====== CAFETERIA ======\n";
    cout << "1. Registrar pedido\n";
    cout << "2. Mostrar pedidos\n";
    cout << "3. Buscar pedido\n";
    cout << "4. Modificar pedido\n";
    cout << "5. Eliminar pedido\n";
    cout << "6. Generar reporte\n";
    cout << "7. Salir\n";

}

// Registrar nuevo pedido
void registrarPedido(){

    if(totalPedidos >= MAX){
        cout << "No se pueden registrar mas pedidos\n";
        return;
    }

    Pedido nuevo;

    cout << "Ingrese ID: ";
    cin >> nuevo.id;

    cout << "Ingrese cliente: ";
    cin >> nuevo.cliente;

    cout << "Ingrese producto: ";
    cin >> nuevo.producto;

    cout << "Ingrese cantidad: ";
    cin >> nuevo.cantidad;

    cout << "Ingrese precio: ";
    cin >> nuevo.precio;

    pedidos[totalPedidos] = nuevo;
    totalPedidos++;

    cout << "Pedido registrado correctamente\n";
}

// Mostrar todos los pedidos
void mostrarPedidos(){

    cout << "\nLISTA DE PEDIDOS\n";

    for(int i=0;i<totalPedidos;i++){

        cout << "\nID: " << pedidos[i].id;
        cout << "\nCliente: " << pedidos[i].cliente;
        cout << "\nProducto: " << pedidos[i].producto;
        cout << "\nCantidad: " << pedidos[i].cantidad;
        cout << "\nPrecio: " << pedidos[i].precio;
        cout << "\n------------------------\n";

    }

}

// Buscar pedido por ID
void buscarPedido(){

    int idBuscado;
    bool encontrado = false;

    cout << "Ingrese ID a buscar: ";
    cin >> idBuscado;

    for(int i=0;i<totalPedidos;i++){

        if(pedidos[i].id == idBuscado){

            cout << "\nPedido encontrado\n";

            cout << "Cliente: " << pedidos[i].cliente << endl;
            cout << "Producto: " << pedidos[i].producto << endl;
            cout << "Cantidad: " << pedidos[i].cantidad << endl;
            cout << "Precio: " << pedidos[i].precio << endl;

            encontrado = true;
            break;
        }

    }

    if(!encontrado){
        cout << "Pedido no encontrado\n";
    }

}

// Modificar pedido
void modificarPedido(){

    int idBuscado;

    cout << "Ingrese ID del pedido a modificar: ";
    cin >> idBuscado;

    for(int i=0;i<totalPedidos;i++){

        if(pedidos[i].id == idBuscado){

            cout << "Nuevo producto: ";
            cin >> pedidos[i].producto;

            cout << "Nueva cantidad: ";
            cin >> pedidos[i].cantidad;

            cout << "Nuevo precio: ";
            cin >> pedidos[i].precio;

            cout << "Pedido modificado\n";

            return;
        }

    }

    cout << "Pedido no encontrado\n";

}

// Eliminar pedido
void eliminarPedido(){

    int idBuscado;

    cout << "Ingrese ID del pedido a eliminar: ";
    cin >> idBuscado;

    for(int i=0;i<totalPedidos;i++){

        if(pedidos[i].id == idBuscado){

            for(int j=i;j<totalPedidos-1;j++){
                pedidos[j] = pedidos[j+1];
            }

            totalPedidos--;

            cout << "Pedido eliminado\n";

            return;
        }

    }

    cout << "Pedido no encontrado\n";

}

// Generar reporte
void generarReporte(){

    float totalVentas = 0;

    for(int i=0;i<totalPedidos;i++){
        totalVentas += pedidos[i].precio * pedidos[i].cantidad;
    }

    cout << "\nREPORTE FINAL\n";
    cout << "Total de pedidos: " << totalPedidos << endl;
    cout << "Total de ventas: $" << totalVentas << endl;

}
