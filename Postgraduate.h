//Header Guard
#pragma once

//Header Files
#include "Student.h"

class Postgraduate : public Student
{
public:
	//Constructors
	using Student::Student;

	//Getters
	int GetYearsToStudy() const override;

	//Setters


protected:
	int yearsToStudy{ 1 };
};