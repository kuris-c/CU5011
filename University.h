#pragma once
//Header Files
#include "Student.h"

class University
{
public:
	//Singleton
	static University* Instance();

	//Getters
	const std::string& GetUniversityName() const;
	std::string GetUniversityAddress() const;
	bool IsUniversityOpen() const;
	int GetTrimester() const;

	//Action Functions
	void AdvanceTrimester(int currentTrimester);

	//Action Functions

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
	static const int maxNumberOfStudents{ 100 };
	std::vector<Student*> student;

	//Year Progress
	int trimesterCount{ 0 };

	//Private Action Functions
	void ProcessInput(int input);
};