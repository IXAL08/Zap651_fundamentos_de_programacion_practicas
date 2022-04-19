// 2022_04_09_Zap651_BatallaPokemon.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Ivan Alejandro Antonio Ruiz

#include <iostream>

int main()
{
    int hp,hpEnemigo,ataque,ataqueEnemigo, pokemon, eleccion;
    bool menu = true;

    while (menu == true)
    {

        std::cout << "Hola, elige que pokemon inicial quieres que te acompañe en tu aventura: \n";
        std::cout << "1. Bulbasaur \n";
        std::cout << "2. Squirtle \n";
        std::cout << "3. Charmander \n";
        std::cin >> pokemon;

        switch (pokemon)
        {
        case 1:
            std::cout << "Has elegido a Bulbasaur para que te acompañe. \n";
            break;
        case 2:
            std::cout << "Has elegido a Squirtle para que te acompañe. \n";
            break;
        case 3:
            std::cout << "Has elegido a Charmander para que te acompañe. \n";
            break;
        default:
            std::cout << "No ha seleccionado ninguno. Game over \n";
            exit;
        }

        switch (pokemon)
        {
        case 1:
            std::cout << "Un charmander salvaje ha aparecido. \n";
            hpEnemigo = 39;
            ataqueEnemigo = 52;
            hp = 45;
            ataque = 49;
            while (hp > 0 && hpEnemigo > 0) {
                std::cout << "1. atacar \n";
                std::cout << "2. defender \n";
                std::cin >> eleccion;
                if (eleccion == 1) {
                    hpEnemigo = (hpEnemigo - ataque) + 39;
                    std::cout << "La vida de charmander es de: " << hpEnemigo << std::endl;
                    hp = (hp - ataqueEnemigo) + 45;
                    std::cout << "tu vida es: " << hp << std::endl;
                }
                else
                {
                    hpEnemigo = hpEnemigo;
                    std::cout << "La vida de charmander es de: " << hpEnemigo << std::endl;
                    hp = hp - 1;
                    std::cout << "tu vida es: " << hp << std::endl;
                }
            }
            break;

        case 2:
            std::cout << "Un bulbasaur salvaje ha aparecido. \n";
            hpEnemigo = 45;
            ataqueEnemigo = 49;
            hp = 44;
            ataque = 48;
            while (hp > 0 && hpEnemigo > 0) {
                std::cout << "1. atacar \n";
                std::cout << "2. defender \n";
                std::cin >> eleccion;
                if (eleccion == 1) {
                    hpEnemigo = (hpEnemigo - ataque) + 45;
                    std::cout << "La vida de bulbasaur es de: " << hpEnemigo << std::endl;
                    hp = (hp - ataqueEnemigo) + 39;
                    std::cout << "tu vida es: " << hp << std::endl;
                }
                else
                {
                    hpEnemigo = hpEnemigo;
                    std::cout << "La vida de bulbasaur es de: " << hpEnemigo << std::endl;
                    hp = hp - 1;
                    std::cout << "tu vida es: " << hp << std::endl;
                }
            }
            break;
        case 3:
            std::cout << "Un squirtle salvaje ha aparecido. \n";
            hpEnemigo = 44;
            ataqueEnemigo = 48;
            hp = 39;
            ataque = 52;
            while (hp > 0 && hpEnemigo > 0) {
                std::cout << "1. atacar \n";
                std::cout << "2. defender \n";
                std::cin >> eleccion;
                if (eleccion == 1) {
                    hpEnemigo = (hpEnemigo - ataque) + 39;
                    std::cout << "La vida de squirtle es de: " << hpEnemigo << std::endl;
                    hp = (hp - ataqueEnemigo) + 44;
                    std::cout << "tu vida es: " << hp << std::endl;
                }
                else
                {
                    hpEnemigo = hpEnemigo;
                    std::cout << "La vida de squirtle es de: " << hpEnemigo << std::endl;
                    hp = hp - 1;
                    std::cout << "tu vida es: " << hp << std::endl;
                }
            }
            break;
        default:
            std::cout << "No ha seleccionado ninguno. Game over \n";
            exit;
        }
        if (hp < 0) {
            std::cout << "Has perdido.\n";
        }
        else
        {
            std::cout << "Has ganado\n";
        }
        std::cout << "Deseas reiniciar el programa? 1 = si, 0 = no \n";
        std::cin >> eleccion;

        if (eleccion == 1)
        {
            menu = true;
        }
        else
        {
            menu = false;
        }
    }
}
