#include "University.h"

University::University(std::string uniName, std::string uniAddress)
{
	currentNumberOfStudents = 0;
	trimesterCount = 0;
	name = uniName;
	address = uniAddress;
	isUniversityOpen = true;
}

std::string University::GetUniversityName() const
{
	return name;
}

std::string University::GetUniversityAddress() const
{
	return address;
}

bool University::GetIsUniversityOpen() const
{
	return isUniversityOpen;;
}

void University::TeachTrimester()
{
	if (trimesterCount != 3)
	{
		trimesterCount++;
	}

	else
	{
		trimesterCount = 0;
	}

	std::cout << "Trimester Completed. Available Options.\n[1] Add another student.\n[2]Advance another trimester.\n[3]Exit Application." << std::endl;
	int choice;
	std::cin >> choice;
	
	std::string studentName; 
	std::string studentAddress;
	std::string loginUsername;
	std::string loginPassword;

	switch (choice)
	{
	case 1: 
		std::cout << "Input Students Name";
		std::cin >> studentName;

		std::cout << "Input Students Address";
		std::cin >> studentAddress;

		std::cout << "Input Students Username";
		std::cin >> loginUsername;

		std::cout << "Input Students Password";
		std::cin >> loginPassword;

		RegisterStudent(studentName, studentAddress, loginUsername, loginPassword);
		break;
		
	case 2:
		std::cout << "You have advanced another trimester!" << std::endl;
		break;

	case 3:
		isUniversityOpen = false;
	}
}

void University::RegisterStudent(std::string studentName, std::string studentAddress, std::string loginUsername, std::string loginPassword, bool studentHasDisability = false, bool studentHasStudentFinance = false)
{
	student[currentNumberOfStudents] = Student(studentName, studentAddress, loginUsername, loginPassword, studentHasDisability, studentHasStudentFinance);
	currentNumberOfStudents++;
}