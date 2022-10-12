#pragma once
//Header Files
#include "Student.h"

//C++ Librares
#include <string>
#include <iostream>
#include <vector>

class University
{
public:
	//Constructors
	University(std::string uniName, std::string uniAddress);

	//Getters
	std::string GetUniversityName() const;
	std::string GetUniversityAddress() const;
	bool GetIsUniversityOpen() const;

	//Complete Trimester
	void TeachTrimester();

	//Add Students At Start Of New Year / View Students
	void RegisterStudent();
	void DisplayStudents();

private:
	//University Information
	std::string name;
	std::string address;
	bool isUniversityOpen;

	//Student Count
	static const int maxNumberOfStudents = 100;
	std::vector<Student> student;

	//Offered Modules
	enum class Modules
	{
		GamesProgramming = 30,
		GamesEngine = 30,
		ToyDevelopment = 40,
		ShaderProgramming = 30
	};

	//Year Progress (in Trimesters)
	int trimesterCount;
	int yearCount;
};