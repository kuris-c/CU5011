#include "Student.h"

Student::Student()
{
	credits = 0;
}

Student::Student(std::string studentName, std::string studentAddress, std::string loginUsername, std::string loginPassword, bool studentHasDisability, bool studentHasStudentFinance)
{
	credits = 0;
	id.name = studentName;
	id.address = studentAddress;
	id.username = loginUsername;
	id.password = loginPassword;
	id.hasDisability = studentHasDisability;
	id.hasStudentFinance = studentHasStudentFinance;
}