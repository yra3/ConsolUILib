#include "Interface.h"
#include <iostream>
#include <windows.h>
#include <conio.h>

namespace MLF
{
	void frendlyInterface(const char s[], void(*a)())   //������ �������� �������� ���������, ������ ��������� �� �������
	{
	setlocale(LC_ALL, "ru");//����������� ����
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		do {                              //�������� ����
			std::system("cls");
			std::cout << s << '\n';
			(*a)();
			std::cout << "\n\n";
			std::cout << "������� Esc ���� ������ ��������� ��������� ��� ����� ������ ������ ����� ���������\n";
		} while (_getch() != '\x1b'); //��������� ���� ������������� �� ����� Esc
	}
}