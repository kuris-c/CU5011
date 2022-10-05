#include "Calculator.h"

int main()
{
	Calculator calculator;

	while (calculator.GetMenu().GetInputValue() != (int)Menu::MenuItem::Exit)
	{
		calculator.RunCalculator();
	}

	return 0;
}