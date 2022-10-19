#pragma once
//Header Files
#include "Student.h"

class Postgraduate : public Student
{
public:
	//Constructor
	using Student::Student;

	//Getters
	int GetYearsToStudy() const override;

	//Setters


	//Offered Modules
	enum class Modules
	{
		//GAMES PROGRAMMING
		//Year 1
		DigitalStudioPractice = 30,
		ConnectedGamesDevelopment = 30,
		ThreeDGameProgramming = 30,
		MachineLearning = 30,
		FinalMediaProject = 60,

		//Year 2
		ProfessionalPlacement = 120
	};

	//Action Functions
	//void Learn() override;

protected:
	int yearsToStudy{ 2 };
};