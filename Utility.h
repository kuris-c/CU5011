#pragma once
//C++ Libraries
#include <iostream>

class Utility
{
public:
	//Singleton
	static Utility* Instance();

	//Utility Functions
	void InputTooltip();

private:
	//Constructors
	Utility() {};
	Utility(const Utility& utility) {};
	Utility& operator=(const Utility& utility) {};
};