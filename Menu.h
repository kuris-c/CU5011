#pragma once
//C++ Libraries
#include <iostream>

class Menu
{
public:
	enum class MenuItem
	{
		Add = 1,
		Subtract = 2,
		Multiply = 3,
		Divide = 4,
		Power = 5,
		Exit = 6
	};

	Menu();

	int DisplayMenu();
	int GetMenuOption();
	int GetInputValue() const;

private:
	int m_input;
};

