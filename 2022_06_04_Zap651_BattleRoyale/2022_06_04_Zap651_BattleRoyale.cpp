// 2022_06_04_Zap651_BattleRoyale.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Ivan Alejandro Antonio Ruiz

#include <iostream>
#include <cstdlib>
#include <string>

struct Guerreros {
    std::string nombre;
    int vida, defensa, ataque, velocidad;
}p[8];

void stats() {
    for (int i = 0; i < sizeof(p) / sizeof(p[i]); i++) {
        std::cout << "Introduzca el nombre del jugador " << i + 1 << " : ";
        std::getline(std::cin, p[i].nombre);
        std::cout << std::endl;
        p[i].vida = rand() % 10;
        p[i].vida = p[i].vida + rand() % 10;
        std::cout << "La vida de " << p[i].nombre << " es: " << p[i].vida << std::endl;
        p[i].defensa = rand() % 10;
        p[i].defensa = p[i].defensa + rand() % 10;
        std::cout << "La defensa de " << p[i].nombre << " es: " << p[i].defensa << std::endl;
        p[i].ataque = rand() % 10;
        p[i].ataque = p[i].ataque + rand() % 10;
        std::cout << "El ataque de " << p[i].nombre << " es: " << p[i].ataque << std::endl;
        p[i].velocidad = rand() % 10;
        p[i].velocidad = p[i].velocidad + rand() % 10;
        std::cout << "La velocidad de " << p[i].nombre << " es: " << p[i].velocidad << std::endl;
        system("pause");
        system("CLS");
    }
}

void Extremista() {
    int maxVida, maxDefensa, maxAtaque, maxVelocidad, menorVida, menorDefensa, menorAtaque, menorVelocidad;
    for (int i = 0; i < sizeof(p) / sizeof(p[i]); i++) {
        if (i == 0) {
            maxVida = i;
        }
        else
        {
            if (p[i].vida > p[i - 1].vida) {
                maxVida = i;
            }
        }
        if (i == 0) {
            maxVida = i;
        }
        else
        {
            if (p[i].defensa > p[i - 1].defensa) {
                maxDefensa = i;
            }
        }
        if (i == 0) {
            maxAtaque = i;
        }
        else
        {
            if (p[i].ataque > p[i - 1].ataque) {
                maxAtaque = i;
            }
        }
        if (i == 0){
            maxVelocidad = i;
        }
        else
        {
            if (p[i].velocidad > p[i - 1].velocidad) {
                maxVelocidad = i;
            }
        }
    }

    std::cout << p[maxVida].nombre << " es el gladiador con mas vida, con: " << p[maxVida].vida << std::endl;
    std::cout << p[maxDefensa].nombre << " es el gladiador con mas defensa, con: " << p[maxDefensa].defensa << std::endl;
    std::cout << p[maxAtaque].nombre << " es el gladiador con mas ataque, con: " << p[maxAtaque].ataque << std::endl;
    std::cout << p[maxVelocidad].nombre << " es el gladiador con mas velocidad, con: " << p[maxVelocidad].velocidad << std::endl;
    system("pause");
    system("CLS");

    for (int i = 0; i < sizeof(p) / sizeof(p[i]); i++) {
        if (i == 0) {
            menorVida = i;
        }
        else
        {
            if (p[i].vida < p[i - 1].vida) {
                menorVida = i;
            }
        }
        if (i == 0) {
            menorDefensa = i;
        }
        else
        {
            if (p[i].defensa < p[i - 1].defensa) {
                menorDefensa = i;
            }
        }
        if (i == 0) {
            menorAtaque = i;
        }
        else
        {
            if (p[i].ataque < p[i - 1].ataque) {
                menorAtaque = i;
            }
        }
        if (i == 0) {
            menorVelocidad = i;
        }
        else
        {
            if (p[i].velocidad < p[i - 1].velocidad) {
                menorVelocidad = i;
            }
        }

    }

    std::cout << p[menorVida].nombre << " es el gladiador con menor vida, con: " << p[menorVida].vida << std::endl;
    std::cout << p[menorDefensa].nombre << " es el gladiador con menor defensa, con: " << p[menorDefensa].defensa << std::endl;
    std::cout << p[menorAtaque].nombre << " es el gladiador con menor ataque, con: " << p[menorAtaque].ataque << std::endl;
    std::cout << p[menorVelocidad].nombre << " es el gladiador con menor velocidad, con: " << p[menorVelocidad].velocidad << std::endl;
    system("pause");
    system("CLS");
  
}


int main()
{
    int retador = 0, enemigo = 0, retadorP, enemigoP;
    std::cout << "Bienvenido al coliseo. Los guerreros que lucharan esta noche son: " << std::endl;
    system("pause");
    system("CLS");
    stats();
    Extremista();

    std::cout << "Pasamos a la batalla: " << std::endl;
    system("pause");
    system("CLS");

    while (enemigo < 7){
        retadorP = 0;
        enemigoP = 0;
        enemigo++;
        if (p[retador].vida < p[enemigo].vida) {
            enemigoP++;
        }
        else{
            retadorP++;
        }
        if (p[retador].defensa < p[enemigo].defensa) {
            enemigoP++;
        }
        else {
            retadorP++;
        }
        if (p[retador].ataque < p[enemigo].ataque) {
            enemigoP++;
        }
        else {
            retadorP++;
        }
        if (p[retador].velocidad < p[enemigo].velocidad) {
            enemigoP++;
        }
        else {
            retadorP++;
        }
        if (retadorP > enemigoP) {
            continue;
        }
        else{
            retador = enemigo;
            continue;
        }
        
    }
    std::cout << "El ganador es: " << p[retador].nombre;
}

