#pragma once

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // !_CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;

static int GLOBAL_VARIABLE;

enum ConsoleColor {
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};

void set_global_var(int);
int get_global_var();

void SetConsoleColor(ConsoleColor color_back = Black, ConsoleColor color_text = White);
void print_color(const char* s, ConsoleColor color_back = Black, ConsoleColor color_text = White);
void print_color_endl(const char* s, ConsoleColor color_back = Black, ConsoleColor color_text = White);

void SetConsoleCursorPos(int x, int y);

void arrange(int& n, int& m); // ������������� ����� �� �����������

template<class Container>
void concatenate(Container& to, Container& from) { // ������������ ���� �������
	to.insert(to.end(), from.begin(), from.end());
}