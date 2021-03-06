// 2022_05_03_Zap651_Biblioteca.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Ivan Alejandro Antonio Ruiz

#include <iostream>
#include <Windows.h>
#include <string>
#include <stdlib.h>
#include <chrono>
#include <thread>


int main()
{
    int posicion = 0, year[5], juego;
    std::string titulo[5], desarrolladora[5], eleccion, intro = "Bienvenido. Para registrar sus juegos, favor de seguir las instrucciones.\nSolo puede registrar 5 juegos.\nPresione enter para continuar.";

    for (const auto c : intro)
    {
        std:: cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    std::cin.ignore();
    system("CLS");

    while (true) {
        for (int contador = 1; contador < 6; contador++) {
            std::cout << "Por favor, introduzca el nombre del juego: " << std::endl;
            std::cin.ignore();
            std::getline(std::cin, titulo[posicion]);
            std::cout << "Por favor, introduzca el año que se publico: " << std::endl;
            std::cin >> year[posicion];
            std::cout << "Por favor, introduzca el nombre del juego: " << std::endl;
            std::cin.ignore();
            std::getline(std::cin, desarrolladora[posicion]);
            std::cout << "" << std::endl;
            std::cout << "Juego No. " << contador << " registrado correctamente." << std::endl;
            std::cout << "-----------------------------------------------------------------" << std::endl;
            posicion++;
            Sleep(2000);
            system("CLS");
        }
        Sleep(2000);
        std::cout << "Todos los juegos han sido registrados correctamente. " << std::endl;
        Sleep(2000);
        std::cout << "Desea comprobar sus datos? Escriba si o no, por favor. " << std::endl;
        std::cin >> eleccion;
        Sleep(2000);
        system("CLS");
        if (eleccion == "Si" || eleccion == "si") {
            while (eleccion == "Si" || eleccion == "si") {
                std::cout << "Seleccione el juego que desea comprobar. Del 1 al 5. " << std::endl;
                std::cin >> juego;
                juego = juego - 1;
                Sleep(2000);
                system("CLS");
                std::cout << "-----------------------------------------------------------------" << std::endl;
                std::cout << "" << std::endl;
                std::cout << "Nombre: " << titulo[juego] << std::endl;
                std::cout << "" << std::endl;
                std::cout << "Año: " << year[juego] << std::endl;
                std::cout << "" << std::endl;
                std::cout << "Desarrolladora: " << desarrolladora[juego] << std::endl;
                std::cout << "-----------------------------------------------------------------" << std::endl;
                std::cout << "Desea comprobar otro juego? " << std::endl;
                std::cin >> eleccion;
                std::cout << "-----------------------------------------------------------------" << std::endl;
                Sleep(2000);
                system("CLS");
                if (eleccion == "Si" || eleccion == "si") {
                    continue;
                }
                else
                {
                    exit(EXIT_SUCCESS);
                }
            }
        }
        else
        {
            std::cout << "Desea registrar otros 5 juegos? " << std::endl;
            std::cin >> eleccion;
            if (eleccion == "Si" || eleccion == "si") {
                continue;
            }
            else
            {
                break;
            }
        }
    }
}

