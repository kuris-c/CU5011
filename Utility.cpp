#include "Utility.h"

Utility* Utility::Instance()
{
	static Utility* utility = new Utility();
	return utility;
}

void Utility::InputTooltip()
{
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << " -> ";
}