#include "University.h"

University::University(std::string uniName, std::string uniAddress)
{
	currentNumberOfStudents = 0;
	trimesterCount = 0;
	name = uniName;
	address = uniAddress;
}

std::string University::GetUniversityName() const
{
	return name;
}

std::string University::GetUniversityAddress() const
{
	return address;
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
}

void University::RegisterStudent()
{
}
