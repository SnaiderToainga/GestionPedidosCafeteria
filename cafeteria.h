/*
Este archivo es un archivo de cabecera (header) que contiene
las definiciones y declaraciones necesarias para el sistema
de gestion de pedidos de una cafeteria.
Aqui se define:
- La estructura Pedido
- El tamaño del vector
- Las variables globales
- Las funciones que utilizará el programa

Este archivo permite que otros archivos como main.cpp
y cafeteria.cpp puedan utilizar las mismas funciones
y estructuras del sistema.
*/

#ifndef CAFETERIA_H
#define CAFETERIA_H

#include <iostream>
#include <string>

using namespace std;

struct Pedido{
    int id;
    string cliente;
    string producto;
    int cantidad;
    float precio;
};

const int MAX = 100; // Tamaño maximo del vector de pedidos

extern Pedido pedidos[MAX]; // Declaracion del vector que almacenara los pedidos
extern int totalPedidos; // Variable que guarda la cantidad total de pedidos registrados

void inicializarPedidos();
void registrarPedido();
void mostrarPedidos();
void buscarPedido();
void modificarPedido();
void eliminarPedido();
void generarReporte();
void mostrarMenu();

#endif
