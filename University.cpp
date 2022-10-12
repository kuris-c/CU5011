#include "University.h"

University::University(std::string uniName, std::string uniAddress)
{
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

	std::cout << "Trimester Completed. Available Options.\n\n[1] Add another student.\n[2] Advance another trimester.\n[3] Display Registered Students.\n[4] Exit Application." << std::endl;

	std::cout << "\n_________________________________________" << std::endl;
	std::cout << " -> ";
	int choice;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		RegisterStudent();
		break;

	case 2:
		std::cout << "You have advanced another trimester!" << std::endl;
		break;

	case 3:
		system("CLS");
		DisplayStudents();
		break;

	case 4:
		isUniversityOpen = false;
		break;
	}
}

void University::RegisterStudent()
{
	Student::ID id;
	id.number = student.size();

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
	
	Student tempStudent(id);
	student.push_back(tempStudent);
}

void University::DisplayStudents()
{
	for (auto& students : student)
	{
		std::cout << "Name: " << students.GetID().name << std::endl;
		std::cout << "Address: " << students.GetID().address << std::endl;
		std::cout << "Username: " << students.GetID().username << std::endl;
		std::cout << "Password: " << students.GetID().password << std::endl;
		std::cout << "\n--------------------------------\n";
		std::cout << "Has Disability: " << students.GetID().hasDisability << std::endl;
		std::cout << "Has Student Finance: " << students.GetID().hasStudentFinance << std::endl;

		system("pause");
	}
}