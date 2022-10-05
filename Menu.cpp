#include "Menu.h"

Menu::Menu()
{
    m_input = 0;
}

int Menu::DisplayMenu()
{
	system("cls");
	std::cout << "#=======================#" << std::endl;
	std::cout << "|      CALCULATOR       |" << std::endl;
	std::cout << "#=======================#" << std::endl;
	std::cout << "| 1. Add                |" << std::endl;
	std::cout << "| 2. Subtract           |" << std::endl;
	std::cout << "| 3. Multiply           |" << std::endl;
	std::cout << "| 4. Divide             |" << std::endl;
	std::cout << "| 5. Power              |" << std::endl;
	std::cout << "| 6. Exit               |" << std::endl;
	std::cout << "#=======================#" << std::endl << std::endl;

	return GetMenuOption();
}

int Menu::GetMenuOption()
{
	do
	{
		std::cout << "Please enter an option: ";
		std::cin >> m_input;
	} while (m_input < (int)MenuItem::Add || m_input >(int)MenuItem::Exit);

	return m_input;
}

int Menu::GetInputValue() const
{
	return m_input;
}
