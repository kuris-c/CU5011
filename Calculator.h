#pragma once
//Header Files
#include "Menu.h"

class Calculator
{
public:
	Calculator();
	void RunCalculator();

	int Add(int num1, int num2) const;
	int Subtract(int num1, int num2) const;
	int Divide(int num1, int num2) const;
	int Multiply(int num1, int num2) const;
	int Power(int base, int exponent) const;

	void InputNumbers(int& m_num1, int& m_num2);
	void ProcessInput(Menu::MenuItem input);

	const Menu& GetMenu();

private:
	Menu m_menu;
	int m_num1;
	int m_num2;
};

