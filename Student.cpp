#include "Student.h"

int Student::GetCredits() const
{
	return credits;
}

int Student::GetYearsOfStudy() const
{
	return yearsOfStudy;
}

void Student::SetID(const ID& id)
{
	this->id = id;
}

Student Student::RegisterStudent(Student tempStudent, int size)
{
	tempStudent.id.number = size;

	system("CLS");
	std::cout << "Input Students Name";
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << " -> ";
	std::cin.ignore();
	std::getline(std::cin, tempStudent.id.name);

	std::cout << "\nInput Students Address, on a single line with spaces";
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << " -> ";
	std::getline(std::cin, tempStudent.id.address);

	std::cout << "\nInput Students Username";
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << " -> ";
	std::getline(std::cin, tempStudent.id.username);

	std::cout << "\nInput Students Password";
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << " -> ";
	std::getline(std::cin, tempStudent.id.password);

	std::cout << "\nHas your student registered with a disability?\n\n[0] No\n[1] Yes";
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << " -> ";
	std::cin >> tempStudent.id.hasDisability;

	std::cout << "\nHas your student registered with student finance?\n\n[0] No\n[1] Yes";
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << " -> ";
	std::cin >> tempStudent.id.hasStudentFinance;

	return tempStudent;
}

void Student::Learn()
{
}