// 2022_04_08_Zap651_CondicionalesSimples.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Ivan Alejandro Antonio Ruiz

#include <iostream>

int main()
{
    int edad = 21, turno = 10, respuesta1, contador = 0;
    double peso = 69.2, altura = 1.7, respuesta2;
    std::string nombre = "Juan", apellidoP = "Arias", apellidoM = "Lopez", curp = "AILJ010624HOCNZVA2", sangre = "O-",respuesta3;
    bool diabetes = false, respuesta4, menu = true;

    std::cout << "Hola, por favor ingrese sus datos. \n";
    do
    {
        std::cout << "Ingrese su turno: \n";
        std::cin >> respuesta1;
        if (respuesta1 == turno) {
            contador++;
        }
        std::cout << "Ingrese su nombre: \n";
        std::cin >> respuesta3;
        if (respuesta3 == nombre) {
            contador++;
        }
        std::cout << "Ingrese su apellido paterno: \n";
        std::cin >> respuesta3;
        if (respuesta3 == apellidoP) {
            contador++;
        }
        std::cout << "Ingrese su apellido materno: \n";
        std::cin >> respuesta3;
        if (respuesta3 == apellidoM) {
            contador++;
        }
        std::cout << "Ingrese su edad: \n";
        std::cin >> respuesta1;
        if (respuesta1 == edad) {
            contador++;
        }
        std::cout << "Ingrese su altura: \n";
        std::cin >> respuesta2;
        if (respuesta2 == altura) {
            contador++;
        }
        std::cout << "Ingrese su peso: \n";
        std::cin >> respuesta2;
        if (respuesta2 == peso) {
            contador++;
        }
        std::cout << "Ingrese su curp: \n";
        std::cin >> respuesta3;
        if (respuesta3 == curp) {
            contador++;
        }
        std::cout << "Ingrese su tipo de sangre: \n";
        std::cin >> respuesta3;
        if (respuesta3 == sangre) {
            contador++;
        }
        std::cout << "Si usted tiene diabetes escriba true. De no ser así, responda false \n";
        std::cin >> respuesta4;
        if (respuesta4 == diabetes) {
            contador++;
        }

        if (contador == 10) {
            std::cout << "El registro es correcto. \n";
            menu = false;
        }
        else {
            std::cout << "El registro es incorrecto";
            menu = false;
        }

    } while (menu == true);
}


