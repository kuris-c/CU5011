#pragma once
//Header Files
#include "Student.h"

//C++ Librares
#include <string>
#include <iostream>

class University
{
public:
	//Constructors
	University(std::string uniName, std::string uniAddress);

	//Getters
	std::string GetUniversityName() const;
	std::string GetUniversityAddress() const;
	
	//Complete Trimester
	void TeachTrimester();

	//Add Students At Start Of New Year
	void RegisterStudent();

private:
	//University Information
	std::string name;
	std::string address;

	//Student Count
	const int maxNumberOfStudents = 100;
	int currentNumberOfStudents;

	//Offered Modules
	enum class Modules
	{
		GamesProgramming = 1,
		GamesEngine = 2,
		ToyDevelopment = 3,
		ShaderProgramming = 4
	};

	//Year Progress (in Trimesters)
	int trimesterCount;
};