#pragma once
//C++ Libraries
#include <string>
#include <vector>

//Header Files
#include "Utility.h"

class Student
{
public:
	//Forward Declaration
	struct ID
	{
		int number{ 0 };
		std::string name{};
		std::string address{};
		std::string username{};
		std::string password{};

		bool hasDisability{ false };
		bool hasStudentFinance{ false };
	};

	//Constructor
	Student(ID studentID) : id(studentID) {};

	//Getters
	const ID& GetID() { return id; }
	int GetCredits() const;
	int GetYearsOfStudy() const;

	//Setters
	void SetID(const ID& id);

	//Action Functions
	Student RegisterStudent(Student tempStudent, int size);
	void Learn();

private:
	//Student ID
	ID id;

	//Student Progress
	int credits{ 0 };
	int yearsOfStudy{ 0 };
};