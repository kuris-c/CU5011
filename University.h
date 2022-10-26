//Header Guard
#pragma once

//C++ Libraries
#include <vector>

//Header Files
#include "Student.h"
#include "Undergraduate.h"
#include "Postgraduate.h"
#include "Doctorate.h"
#include "Utility.h"

class University
{
public:
	//Singleton
	static University* Instance();

	//Getters
	std::string GetUniversityName() const;
	std::string GetUniversityAddress() const;
	bool IsUniversityOpen() const;
	int GetTrimester() const;
	int GetNumberOfStudents() const;

	//Setters
	void SetTrimester(int addTrimester = 1);
	void SetUniversityName(std::string newName);
	void SetUniversityAddress(std::string newAddress);
	void SetIsUniversityOpen(bool isOpen);

	//Action Functions
	void AdvanceTrimester();

private:
	//Constructors
	University(std::string uniName, std::string uniAddress) : name(uniName), address(uniAddress) {};
	University(const University& university) {};
	University& operator=(const University& university) {};

	//University Information
	std::string name;
	std::string address;
	bool isUniversityOpen{ true };

	//Student Count
	static const int maxNumberOfStudents{ 1400 };
	std::vector<Student*> student;

	//Year Progress
	int trimesterCount{ 1 };

	//Private Action Functions
	void ProcessInput(int input);
};