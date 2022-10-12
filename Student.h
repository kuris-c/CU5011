#pragma once
//C++ Librares
#include <string>

class Student
{
public:
	//Forward Declaration
	struct ID
	{
		//REQUIRED VARIABLES
		int number;
		std::string name;
		std::string address;
		std::string username;
		std::string password;

		//OPTIONAL VARIABLES
		bool hasDisability;
		bool hasStudentFinance;
	};

	//Constructors
	Student();
	Student(ID studentID);

	//Getters
	int GetStudentCredits() const;

	const ID& GetID() { return id; }

	//Setters
	void SetID(const ID& id);

	//Action Functions
	void Learn();

private:
	//Student Information
	ID id;

	//Student Credits
	int credits;
};