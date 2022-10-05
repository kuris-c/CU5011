#include "Calculator.h"

Calculator::Calculator()
{
	m_num1 = 0;
	m_num2 = 0;
}

void Calculator::RunCalculator()
{
	ProcessInput(m_menu.DisplayMenu());
}

int Calculator::Add(int num1, int num2) const
{
	return num1 + num2;
}

int Calculator::Subtract(int num1, int num2) const
{
	return num1 - num2;
}

int Calculator::Divide(int num1, int num2) const
{
	if (num2 != 0)
	{
		return num1 / num2;
	}

	else
	{
		std::cout << "Error!" << std::endl;
		return 0;
	}
}

int Calculator::Multiply(int num1, int num2) const
{
	return num1 * num2;
}

int Calculator::Power(int base, int exponent) const
{
	int result = base;

	if (exponent == 0)
	{
		result = 1;
	}

	else if (exponent == 1)
	{
		result = base;
	}

	else
	{
		result *= Power(base, exponent - 1);
	}

	return result;
}

void Calculator::InputNumbers(int& int1, int& m_int2)
{
	std::cout << "Enter the first number: ";
	std::cin >> m_num1;

	std::cout << "Enter the second number: ";
	std::cin >> m_num2;
}

void Calculator::ProcessInput(Menu::MenuItem input)
{
	switch (input)
	{
	case Menu::MenuItem::Add:
	{
		InputNumbers(m_num1, m_num2);
		std::cout << "The result is: " << Add(m_num1, m_num2) << std::endl;
		break;
	}

	case Menu::MenuItem::Subtract:
	{
		InputNumbers(m_num1, m_num2);
		std::cout << "The result is: " << Subtract(m_num1, m_num2) << std::endl;
		break;
	}

	case Menu::MenuItem::Multiply:
	{
		InputNumbers(m_num1, m_num2);
		std::cout << "The result is: " << Multiply(m_num1, m_num2) << std::endl;
		break;
	}

	case Menu::MenuItem::Divide:
	{
		InputNumbers(m_num1, m_num2);
		std::cout << "The result is: " << Divide(m_num1, m_num2) << std::endl;
		break;
	}

	case Menu::MenuItem::Power:
	{
		InputNumbers(m_num1, m_num2);  //base and exponent
		std::cout << "The result is: " << Power(m_num1, m_num2) << std::endl;
		break;
	}

	default:
	{
		std::cout << "Goodbye!" << std::endl;
		break;
	}
	};

	system("pause");
}

const Menu& Calculator::GetMenu()
{
	return m_menu;
}
