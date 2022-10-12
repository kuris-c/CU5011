#include "Student.h"

Student::Student()
{
	credits = 0;
	id.hasDisability = false;
	id.hasStudentFinance = false;
}

Student::Student(ID studentID)
{
	credits = 0;
	id.number = studentID.number;
	id.name = studentID.name;
	id.address = studentID.address;
	id.username = studentID.username;
	id.password = studentID.password;
	id.hasDisability = studentID.hasDisability;
	id.hasStudentFinance = studentID.hasStudentFinance;
}

int Student::GetStudentCredits() const
{
	return credits;
}

void Student::SetID(const ID& id)
{
	this->id = id;
}

void Student::Learn()
{

}