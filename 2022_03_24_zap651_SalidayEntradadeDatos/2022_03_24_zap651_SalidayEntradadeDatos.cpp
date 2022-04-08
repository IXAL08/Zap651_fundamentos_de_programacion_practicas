// 2022_03_24_zap651_TiposdeDatos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Ivan Alejandro Antonio Ruiz

#include <iostream>
#include <string.h>

int main()
{
    int Enteros;
    float Decimales;
    char Simbolo;
    double Decimales_mas_grande;
    std::string Frase = "";

    std::cout << "Parte con C++\n";
    //Entero
    std::cout << "Ingrese algun numero entero: \n";
    std::cin >> Enteros;
    std::cout << "Su numero es: " << Enteros;
    //Decimal
    std::cout << "\nIngrese un numero decimal: \n";
    std::cin >> Decimales;
    std::cout << "Su numero es: " << Decimales;
    //Caracter
    std::cout << "\nIngrese un caracter: \n";
    std::cin >> Simbolo;
    std::cout << "Su caracter es: " << Simbolo;
    //Decimales
    std::cout << "\nIngrese una decimal con mas de 5 decimas:  \n";
    std::cin >> Decimales_mas_grande;
    std::cout << "Su decimal es: " << Decimales_mas_grande;
    //Frase
    std::cout << "\nIngrese una frase: \n";
    std::cin >> Frase;
    std::cout << "Su frase es: " << Frase;

    printf("\nParte con C\n");
    //Entero
    printf("Ingrese algun numero entero: \n");
    scanf_s("%d", &Enteros);
    printf("Su numero es: %d", Enteros);
    //Decimal
    printf("\nIngrese un numero decimal: \n");
    scanf_s("%f", &Decimales);
    printf("Su numero es: %f", Decimales);
    /**No se puede jaja
    Caracter
    printf("\nIngrese un caracter: \n");
    scanf_s("%c", Simbolo);
    printf("Su caracter es: %c", Simbolo);**/
    //Decimales
    printf("\nIngrese una decimal con mas de 5 decimas: \n");
    scanf_s("%lf", &Decimales_mas_grande);
    printf("Su numero es: %lf", Decimales_mas_grande);
    /**Tampoco se puede jaja
    Frase 
    printf("\nIngrese una frase: \n");
    scanf_s("%s", Frase);
    printf("Su frase es: %s", Frase);**/
}