// 2022_05_23_Zap651_JuegosdeMesa.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Ivan Alejandro Antonio Ruiz

#include <iostream>
#include <chrono>
#include <thread>
#include <stdio.h>
#include <string>
#include <stdlib.h>

bool ReadInt(int& valor)
{
	bool ok = std::cin.good();

	if (!ok)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	return ok;
}

int main()
{
	std::string intro = "Bienvenido, el objetivo del programa es el poder guardar sus 5 juegos favoritos.\n", eleccion, titulo[5], autor[5];
	int Year[5], item;

	for (const auto c : intro) {
		std::cout << c << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(50));
	}
	system("pause");
	system("CLS");

	while (true) {
		for (int i = 0; i < 5; i++) {
			std::cout << "--------------------------------------" << std::endl;
			std::cout << "Introduzca el nombre del juego numero " << i + 1 << ": " << std::endl;
			std::cin.ignore();
			std::getline(std::cin, titulo[i]);
			std::cout << "Introduzca el autor del juego numero " << i + 1 << ": "  << std::endl;
			std::cin.ignore();
			std::getline(std::cin, autor[i]);
			std::cout << "Introduzca el año que se publico el juego numero " << i + 1 << ": " << std::endl;
			std::cin >> Year[i];
			while (true)
			{
				if (!ReadInt(Year[i])) {
					std::cout << "ERROR, digite un numero por favor.\n";
					std::cin >> Year[i];
				}
				else
					break;
			}			
			std::cout << "--------------------------------------" << std::endl;
			system("pause");
			system("CLS");
		}

		std::cout << "Desea consultar sus datos? Responda Si o No. " << std::endl;
		std::cin >> eleccion;
		system("CLS");
		if (eleccion == "Si" || eleccion == "si" || eleccion == "SI" || eleccion == "sI") {
			do
			{
				std::cout << "Cual de los 5 juegos registrados desea consultar? " << std::endl;
				std::cin >> item;
				system("pause");
				system("CLS");
				std::cout << "--------------------------------------" << std::endl;
				std::cout << std::endl;
				std::cout << "El nombre del juego numero " << item << " es: " << titulo[item - 1] << std::endl;
				std::cout << std::endl;
				std::cout << "El autor del juego numero " << item << " es: " << autor[item - 1] << std::endl;
				std::cout << std::endl;
				std::cout << "El año de publicacion del juego numero " << item << " es: " << Year[item - 1] << std::endl;
				std::cout << std::endl;
				std::cout << "--------------------------------------" << std::endl;
				std::cout << "Desea consultar otro juego? Escriba Si o no." << std::endl;
				std::cin >> eleccion;
			} while (eleccion == "Si" || eleccion == "si" || eleccion == "SI" || eleccion == "sI");
			std::cout << "Desea registrar otros 5 juegos? " << std::endl;
			std::cin >> eleccion;
			if (eleccion == "Si" || eleccion == "si" || eleccion == "SI" || eleccion == "sI") {
				continue;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			std::cout << "Desea registrar otros 5 juegos? " << std::endl;
			std::cin >> eleccion;
			if (eleccion == "Si" || eleccion == "si" || eleccion == "SI" || eleccion == "sI") {
				continue;
			}
			else
			{
				return 0;
			}
		}
	}
}


