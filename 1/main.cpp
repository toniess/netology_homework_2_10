#include <iostream>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "������� ���: ";
	std::string name;
	std::cin >> name;
	std::cout << "������, " << name << "!" << std::endl;
	return 0;
}