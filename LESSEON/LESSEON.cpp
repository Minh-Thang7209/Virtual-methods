#include <iostream>
#include <Windows.h>
#include "Figure.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice;
	Figure* fig = nullptr;

	std::cout << "������ ��� ���� ��� ��������� �����\n";
	std::cout << "1. ������������\n";
	std::cout << "2. ����\n";
	std::cout << "3. г����������� ���������\n";
	std::cout << "��� ����: ";
	std::cin >> choice;

	switch (choice) {
		case 1: {
			double width, height;
			std::cout << "���������� ����� ��� �������������:\n";
			std::cout << "������ ������: ";
			std::cin >> width;
			std::cout << "������ �������: ";
			std::cin >> height;
			fig = new Reactangle(width, height);
			break;
	}
		case 2: {
			double radius;
			std::cout << "���������� ����� ����:\n";
			std::cout << "������ ����� ����: ";
			std::cin >> radius;
			fig = new Circle(radius);
			break;
	}
		case 3: {
			double height1, base;
			std::cout << "���������� ����� ����������:\n";
			std::cout << "������ ������: ";
			std::cin >> height1;
			std::cout << "������ ������� �������: ";
			std::cin >> base;
			fig = new Triangle(base, height1);
			break;
		}
		default:
			std::cout << "������� ����";
	}

	std::cout << "����� ������: " << fig->GetArea() << '\n';

	delete fig;
}
