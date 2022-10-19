#include "Student.h"

int Student::GetCredits() const
{
	return credits;
}

void Student::SetID(const ID& id)
{
	this->id = id;
}

void Student::RegisterStudent(int size)
{
	id.number = size;

	system("CLS");
	std::cout << "Input Students Name";
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << " -> ";
	std::cin.ignore();
	std::getline(std::cin, id.name);

	std::cout << "\nInput Students Address, on a single line with spaces";
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << " -> ";
	std::getline(std::cin, id.address);

	std::cout << "\nInput Students Username";
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << " -> ";
	std::getline(std::cin, id.username);

	std::cout << "\nInput Students Password";
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << " -> ";
	std::getline(std::cin, id.password);

	std::cout << "\nHas your student registered with a disability?\n\n[0] No\n[1] Yes";
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << " -> ";
	std::cin >> id.hasDisability;

	std::cout << "\nHas your student registered with student finance?\n\n[0] No\n[1] Yes";
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << " -> ";
	std::cin >> id.hasStudentFinance;
}