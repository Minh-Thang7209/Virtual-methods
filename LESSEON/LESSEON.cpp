#include <iostream>
#include <Windows.h>
#include "Figure.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice;
	Figure* fig = nullptr;

	std::cout << "Введіть свій вибір для розрахуку площі\n";
	std::cout << "1. Чотирикутник\n";
	std::cout << "2. Коло\n";
	std::cout << "3. Рівнобедрений трикутник\n";
	std::cout << "Ваш вибір: ";
	std::cin >> choice;

	switch (choice) {
		case 1: {
			double width, height;
			std::cout << "Обчислюємо площу для чотирикутника:\n";
			std::cout << "Введіть висоту: ";
			std::cin >> width;
			std::cout << "Введіть довжину: ";
			std::cin >> height;
			fig = new Reactangle(width, height);
			break;
	}
		case 2: {
			double radius;
			std::cout << "Обчислюємо площу кола:\n";
			std::cout << "Введіть радіус кола: ";
			std::cin >> radius;
			fig = new Circle(radius);
			break;
	}
		case 3: {
			double height1, base;
			std::cout << "Обчислюємо площу трикутника:\n";
			std::cout << "Введіть висоту: ";
			std::cin >> height1;
			std::cout << "Введіть довжину сторони: ";
			std::cin >> base;
			fig = new Triangle(base, height1);
			break;
		}
		default:
			std::cout << "Невірний вибір";
	}

	std::cout << "Площа фігури: " << fig->GetArea() << '\n';

	delete fig;
}
