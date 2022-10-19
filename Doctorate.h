#pragma once
//Header Files
#include "Student"

class Doctorate : public Student
{
public:
	//Constructors
	using Student::Student;

	//Getters
	int GetYearsToStudy() const override;

	//Setters


	//Offered Modules
	enum class Modules
	{
		//GAMES PROGRAMMING
		//Year 1


		//Year 2


		//Year 3


		//Year 4
	};

	//Action Functions
	//void Learn() override;

protected:
	int yearsToStudy{ 4 };
};