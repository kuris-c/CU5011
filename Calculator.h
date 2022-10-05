#pragma once
//Header Files
#include "Menu.h"

class Calculator
{
public:
	Calculator();
	void RunCalculator();

	int Add(int num1, int num2);
	int Subtract(int num1, int num2);
	int Divide(int num1, int num2);
	int Multiply(int num1, int num2);
	int Power(int base, int exponent);

	void InputNumbers(int& m_num1, int& m_num2);
	void ProcessInput(int input);

	const Menu& GetMenu();

private:
	Menu m_menu;
	int m_num1;
	int m_num2;
};

