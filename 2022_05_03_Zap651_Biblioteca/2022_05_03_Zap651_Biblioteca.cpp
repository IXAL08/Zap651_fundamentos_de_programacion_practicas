// 2022_05_03_Zap651_Biblioteca.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Ivan Alejandro Antonio Ruiz

#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
    int posicion = 0, year[5];
    std::string titulo[5], desarrolladora[5];

    std::cout << "Bienvenido. Para registrar sus juegos, favor de seguir las instrucciones.\n";
    Sleep(2000);
    std::cout << "Solo puede registrar 5 juegos.\n";
    Sleep(2000);
    std::cout << "-----------------------------------------------------------------" << std::endl;

    while (true) {
        for (int contador = 1; contador < 6; contador++) {
            std::cout << "Por favor, introduzca el nombre del juego: " << std::endl;
            std::getline(std::cin, titulo[posicion]);
            std::cout << "Por favor, introduzca el año que se publico: " << std::endl;
            std::cin >> year[posicion];
            std::cout << "Por favor, introduzca el nombre del juego: " << std::endl;
            std::cin.ignore();
            std::getline(std::cin, desarrolladora[posicion]);
            std::cout << "" << std::endl;
            std::cout << "Juego No. " << contador << " registrado correctamente." << std::endl;
            std::cout << "-----------------------------------------------------------------" << std::endl;
        }

    }
}

