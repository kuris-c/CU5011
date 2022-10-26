#include "Utility.h"

void Utility::InputTooltip()
{
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << " -> ";
}

void Utility::DisplayList(std::string prompts[], int numberOfPrompts)
{
	for (int i = 0; i != numberOfPrompts; i++)
	{
		std::cout << "[" << i << "] " << prompts[i] << std::endl;
	}
}