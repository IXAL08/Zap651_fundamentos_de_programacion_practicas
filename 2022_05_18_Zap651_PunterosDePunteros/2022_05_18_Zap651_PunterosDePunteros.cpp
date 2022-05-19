// 2022_05_18_Zap651_PunterosDePunteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Ivan Alejandro Antonio Ruiz

#include <iostream>
#include <stdlib.h>

int main()
{
    int x, y, dato;

    std::cout << "Este programa realiza una matriz dinámica.\n Nota: si algún dato es menor o igual a 3, debera ingresar los datos manualmente.\n";
    std::cout << "Por favor, introduzca la cantidad de filas: ";
    std::cin >> x;
    std::cout << "Por favor, introduzca la cantidad de columnas: ";
    std::cin >> y;

    if (x <= 3 || y <= 3)
    {
        int** matriz = new int* [x];
        std::cout << "Introduzca los datos para la matriz: " << std::endl;
        for (int i = 0; i < x; i++) {
            matriz[i] = new int[y];
        }
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                std::cout << "Ingrese el dato de la posicion " << "[" << i << "] " << "[" << j << "] = ";
                std::cin >> dato;
                matriz[i][j] = dato;
            }
        }
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                std::cout << matriz[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    else
    {
        int** matriz = new int* [x];
        for (int i = 0; i < x; i++) {
            matriz[i] = new int[y];
        }
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                dato = rand() % 10;
                matriz[i][j] = dato;
            }
        }
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                std::cout << matriz[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
}


