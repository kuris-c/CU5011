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
	Student() {};
	Student(ID studentID) : id(studentID) {};

	//Getters
	const ID& GetID() { return id; }
	int GetCredits() const;
	virtual int GetYearsToStudy() const = 0;

	//Setters
	void SetID(const ID& id);

	//Action Functions
	void RegisterStudent(int size);
	//virtual void Learn() = 0;

protected:
	//Student ID
	ID id;

	//Student Progress
	int credits{ 0 };
};