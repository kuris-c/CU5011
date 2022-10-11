#pragma once
//C++ Librares
#include <string>

class Student
{
public:
	//Constructors
	Student();
	Student(std::string studentName, std::string studentAddress, std::string loginUsername, std::string loginPassword, bool studentHasDisability = false, bool studentHasStudentFinance = false);

	//Getters

	//Setters

private:
	//Student Information
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
	ID id;

	//Student Credits
	int credits;
};