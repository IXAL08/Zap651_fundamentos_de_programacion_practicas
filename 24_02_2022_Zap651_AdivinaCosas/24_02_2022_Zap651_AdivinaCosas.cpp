// 24_04_2022_Zap651_AdivinaCosas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Ivan Alejandro Antonio Ruiz

#include <iostream>
#include <Windows.h>

int main()
{
    int respuesta;

    std::cout << "Este programa trata de adivinar el deporte de balon que estes pensando." << std::endl;
    std::cout << "Por favor, responda con un 0 si es falso y 1 si es verdadero." << std::endl;
    Sleep(1000);
    std::cout << "Tu deporte es famoso? " << std::endl;
    std::cin >> respuesta;
    if (respuesta == 1) {
        Sleep(1000);
        std::cout << "El tamaño del balon es grande?" << std::endl;
        std::cin >> respuesta;
        if (respuesta == 1) {
            Sleep(1000);
            std::cout << "Tu deporte se utiliza las manos principalmente?" << std::endl;
            std::cin >> respuesta;
            if (respuesta == 1) {
                Sleep(1000);
                std::cout << "Tu deporte cuenta con una red?" << std::endl;
                std::cin >> respuesta;
                if (respuesta == 1){
                    Sleep(1000);
                    std::cout << "Debes anotar en un aro?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        std::cout << "Tu deporte es Basketball." << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        std::cout << "Tu deporte es Volleyball." << std::endl;
                    }
                }
                else
                {
                    Sleep(1000);
                    std::cout << "Tu deporte permite pasar el balón hacia delante?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        std::cout << "Tu deporte es futbol americano." << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        std::cout << "Tu deporte es Rugby." << std::endl;
                    }
                }
            }
            else
            {
                Sleep(1000);
                std::cout << "Tu deporte se juega en un espacio abierto?" << std::endl;
                std::cin >> respuesta;
                if (respuesta == 1) {
                    Sleep(1000);
                    std::cout << "Tu deporte se juega en playa?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        std::cout << "Tu deporte es futbol de playa." << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        std::cout << "Tu deporte es futbol." << std::endl;
                    }
                }
                else
                {
                    Sleep(1000);
                    std::cout << "Tu deporte se juega con 7 jugadores?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        std::cout << "Tu deporte es futbol 7." << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        std::cout << "Tu deporte es futbol de sala." << std::endl;
                    }
                }
            }
        }
        else
        {
            Sleep(1000);
            std::cout << "Tu deporte utiliza una red?" << std::endl;
            std::cin >> respuesta;
            if (respuesta == 1) {
                Sleep(1000);
                std::cout << "Tu deporte utiliza una mesa para ser jugado?" << std::endl;
                std::cin >> respuesta;
                if (respuesta == 1) {
                    Sleep(1000);
                    std::cout << "Tu deporte utiliza una raqueta?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        std::cout << "Tu deporte es pin pong." << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        std::cout << "Tu deporte es ajedrez." << std::endl;
                    }
                }
                else
                {
                    Sleep(1000);
                    std::cout << "Tu deporte permite botar la pelota alguna vez en el campo?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        std::cout << "Tu deporte es Padel." << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        std::cout << "Tu deporte es Tenis." << std::endl;
                    }
                }
            }
            else
            {
                Sleep(1000);
                std::cout << "Tu deporte utiliza equipamento para mover el balon?" << std::endl;
                std::cin >> respuesta;
                if (respuesta == 1) {
                    Sleep(1000);
                    std::cout << "utilizas un caballo para moverte?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        std::cout << "Tu deporte es polo." << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        std::cout << "Tu deporte es golf." << std::endl;
                    }
                }
                else
                {
                    Sleep(1000);
                    std::cout << "Tu deporte se juega en espacios cerrados?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        std::cout << "Tu deporte es boliche." << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        std::cout << "Tu deporte es petanca." << std::endl;
                    }
                }
            }
        }
    }
    else
    {
        Sleep(1000);
        std::cout << "Tu deporte es una variable del futbol?" << std::endl;
        std::cin >> respuesta;
        if (respuesta == 1) {
            Sleep(1000);
            std::cout << "Tu deporte combina otros deportes?" << std::endl;
            std::cin >> respuesta;
            if (respuesta == 1) {
                Sleep(1000);
                std::cout << "Tu deporte se combina con volleyball?" << std::endl;
                std::cin >> respuesta;
                if (respuesta == 1) {
                    Sleep(1000);
                    std::cout << "Tu deporte es futbolvaley?" << std::endl;
                }
                else
                {
                    Sleep(1000);
                    std::cout << "Tu deporte es Bossaball" << std::endl;
                }
            }
            else
            {
                Sleep(1000);
                std::cout << "Tu deporte utiliza bicicletas?" << std::endl;
                std::cin >> respuesta;
                if (respuesta == 1) {
                    Sleep(1000);
                    std::cout << "Tu deporte es cicloball" << std::endl;
                }
                else
                {
                    Sleep(1000);
                    std::cout << "Tu deporte es futbol de carnaval" << std::endl;
                }
            }
        }
        else
        {
            Sleep(1000);
            std::cout << "Tu deporte se practica en agua?" << std::endl;
            std::cin >> respuesta;
            if (respuesta == 1) {
                Sleep(1000);
                std::cout << "Tu deporte es una variante del basketball?" << std::endl;
                std::cin >> respuesta;
                if (respuesta == 1) {
                    Sleep(1000);
                    std::cout << "Tu deporte es waterbasket" << std::endl;
                }
                else
                {
                    Sleep(1000);
                    std::cout << "Tu deporte es waterpolo" << std::endl;
                }
            }
            else
            {
                Sleep(1000);
                std::cout << "Tu deporte es una variante del hockey?" << std::endl;
                std::cin >> respuesta;
                if (respuesta == 1) {
                    Sleep(1000);
                    std::cout << "Tu deporte se jeuga en hielo?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        std::cout << "Tu deporte es Bandy." << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        std::cout << "Tu deporte es Hockey sobre cesped." << std::endl;
                    }
                }
                else
                {
                    Sleep(1000);
                    std::cout << "Tu deporte es una variante del polo?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        std::cout << "Tu deporte es Elephant Polo." << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        std::cout << "Tu deporte es pelota vasca." << std::endl;
                    }
                }
            }
        }
    }
}