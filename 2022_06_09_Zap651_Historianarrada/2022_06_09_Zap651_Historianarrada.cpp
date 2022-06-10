// 2022_06_09_Zap651_Historianarrada.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
	int eleccion;
	std::cout << "Bienvenido. Este programa te contara una historia la cual tu podras dirigir el final.\n";
	std::cout << "Deberas escribir 1, 2 o 3 dependiendo de la opcion que usted desee.\n";
	system("pause");
	system("CLS");

	while (true) {
		std::cout << "Tu aventura comienza en tu casa.\nTe encuentras acostado en tu cama y abres los ojos.\n Decide que quieres hacer hoy: \n";
		std::cout << "1. Te levantas, desayunas y te duchas.\n 2. Te levantas, desayunas pero no te duchas.\n 3. Decides no levantarte y perder todo tu dia.\n";
		std::cin >> eleccion;
		system("pause");
		system("CLS");
		switch (eleccion)
		{
		case 1:
			std::cout << "Terminas de bañarte y decides salir de tu casa. Elije que quieres hacer a continuacion\n 1. Ir de aventura a la ciudad a\n 2. Dar un paseo.\n 3. Regresar a tu casa y perder el dia.\n";
			std::cin >> eleccion;
			system("pause");
			system("CLS");
			if (eleccion == 1) {
				std::cout << "Comienza tu aventura. Llegas a la ciudad pero recuerdas que solo tienes dinero para regresarte. Tal vez debiste pensarlo mejor\n";
				std::cout << "Final 2: El pobre";
				system("pause");
				system("CLS");
				std::cout << "Deseas repetir el programa?\n 1 para si, 2 para no.";
				std::cin >> eleccion;
				if (eleccion == 1) {
					continue;
				}
				else {
					return 0;
				}
			}
			if (eleccion == 2) {
				std::cout << "Decides dar un paseo en tu cuadra. Mientras te encuentras absorto en tus pensamientos, escuchas una frase: Ya te la sabes \nQue deseas hacer?\n";
				std::cout << "1. Quedarte quieto\n2. levantar las manos\n3. Entregar tus cosas";
				std::cin >> eleccion;
				system("pause");
				system("CLS");
				if (eleccion == 1) {
					std::cout << "Decides quedarte quieto, el asaltante se desespera y te dispara a matarte. Tal vez quedarse quieto no fue la mejor opcion...\n";
					std::cout << "Final 3: Mexico lindo y querido\n";
					std::cout << "Deseas repetir el programa?\n 1 para si, 2 para no.";
					std::cin >> eleccion;
					if (eleccion == 1) {
						continue;
					}
					else {
						return 0;
					}
				}
				if (eleccion == 2) {
					std::cout << "Levantas las manos pero hace llamar mucho la atencion. El ladron te roba algunas cosas y huye. Dispara pero no acierta.\nLa gente se acerca para ver si estas bien y regresas a tu casa con un trauma de por vida\n";
					std::cout << "Final 4: Un golpe de suerte.\n";
					std::cout << "Deseas repetir el programa?\n 1 para si, 2 para no.";
					std::cin >> eleccion;
					system("pause");
					system("CLS");
					if (eleccion == 1) {
						continue;
					}
					else {
						return 0;
					}
				}
				if (eleccion == 3) {
					std::cout << "Entregas tus cosas al asaltante, es buena gente y decide regresarte tu INE.\n";
					std::cout << "Final 5: Si te la sabias.\n";
					std::cout << "Deseas repetir el programa?\n 1 para si, 2 para no.";
					std::cin >> eleccion;
					system("pause");
					system("CLS");
					if (eleccion == 1) {
						continue;
					}
					else {
						return 0;
					}
				}
			}
			if (eleccion == 3) {

			}
			break;
		case 2:
			std::cout << "Te sientes con mucha energia. Pero hueles a animal muerto.\nElije que quieres hacer a continuacion\n 1. Ir de aventura a la ciudad a\n 2. Dar un paseo.\n 3. Regresar a tu casa y perder el dia.";
			if (eleccion == 1) {
				std::cout << "Comienza tu aventura. Llegas a la ciudad pero recuerdas que solo tienes dinero para regresarte. Tal vez debiste pensarlo mejor\n";
				std::cout << "Final 2: El pobre";
				std::cout << "Deseas repetir el programa?\n 1 para si, 2 para no.";
				std::cin >> eleccion;
				system("pause");
				system("CLS");
				if (eleccion == 1) {
					continue;
				}
				else {
					return 0;
				}
			}
			if (eleccion == 2) {
				std::cout << "Decides dar un paseo en tu cuadra. Mientras te encuentras absorto en tus pensamientos, escuchas una frase: Ya te la sabes \nQue deseas hacer?\n";
				std::cout << "1. Quedarte quieto\n2. levantar las manos\n3. Entregar tus cosas";
				std::cin >> eleccion;
				system("pause");
				system("CLS");
				if (eleccion == 1) {
					std::cout << "Decides quedarte quieto, el asaltante se desespera y te dispara a matarte. Tal vez quedarse quieto no fue la mejor opcion...\n";
					std::cout << "Final 3: Mexico lindo y querido\n";
					std::cout << "Deseas repetir el programa?\n 1 para si, 2 para no.";
					std::cin >> eleccion;
					if (eleccion == 1) {
						continue;
					}
					else {
						return 0;
					}
				}
				if (eleccion == 2) {
					std::cout << "Levantas las manos pero por tu olor el asaltante huye.\nTe quedas en shock, reaccionas y corres a tu casa sano y salvo\n";
					std::cout << "Final 6: No ducharse es bueno?...\n";
					std::cout << "Deseas repetir el programa?\n 1 para si, 2 para no.";
					std::cin >> eleccion;
					system("pause");
					system("CLS");
					if (eleccion == 1) {
						continue;
					}
					else {
						return 0;
					}
				}
				if (eleccion == 3) {
					std::cout << "Entregas tus cosas al asaltante, es buena gente y decide regresarte tu INE.\n";
					std::cout << "Final 5: Si te la sabias.\n";
					std::cout << "Deseas repetir el programa?\n 1 para si, 2 para no.";
					std::cin >> eleccion;
					system("pause");
					system("CLS");
					if (eleccion == 1) {
						continue;
					}
					else {
						return 0;
					}
				}

				break;
		case 3:
			std::cout << "Final 1: El aliado de la procrastinacion.\n";
			std::cout << "Deseas repetir el programa?\n 1 para si, 2 para no.";
			std::cin >> eleccion;
			system("pause");
			system("CLS");
			if (eleccion == 1) {
				continue;
			}
			else {
				return 0;
			}
		default:
			break;
			}
		}
	}
}

