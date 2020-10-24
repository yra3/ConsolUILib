#include "Interface.h"
#include <iostream>
#include <windows.h>
#include <conio.h>

namespace MLF
{
	void frendlyInterface(const char s[], void(*a)())   //первый параметр описание программы, второй указатель на функцию
	{
	setlocale(LC_ALL, "ru");//настраиваем язык
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		do {                              //основной цикл
			std::system("cls");
			std::cout << s << '\n';
			(*a)();
			std::cout << "\n\n";
			std::cout << "Нажмите Esc если хотите завершить программу или любую другую кнопку чтобы повторить\n";
		} while (_getch() != '\x1b'); //повторяем пока пользолватель не нажмёт Esc
	}
}