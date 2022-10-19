#include "University.h"

University* University::Instance()
{
	static University* university = new University("London Metropolitan", "166-220 Holloway Rd, London N7 8DB");
	return university;
}

std::string University::GetUniversityName() const
{
	return name;
}

std::string University::GetUniversityAddress() const
{
	return address;
}

bool University::IsUniversityOpen() const
{
	return isUniversityOpen;
}

int University::GetTrimester() const
{
	return trimesterCount;
}

void University::AdvanceTrimester(int currentTrimester)
{
	int optionNumber = 1, choice;

	std::cout << "Available Options;\n\n";
	std::cout << "[" << optionNumber++ << "] Advance Another Trimester.\n";
	std::cout << "[" << optionNumber++ << "] Display Registered Students.\n";
	std::cout << "[" << optionNumber++ << "] Exit Application.\n";
	if (trimesterCount == 0)
	{
		std::cout << "[" << optionNumber++ << "] Add Another Student.\n";
	}

	Utility::Instance()->InputTooltip();
	std::cin >> choice;

	ProcessInput(choice);
}

void University::ProcessInput(int input)
{
	switch (input)
	{
	case 1:
		if (trimesterCount != 2)
		{
			trimesterCount++;
		}

		else
		{
			trimesterCount = 0;
		}

		system("CLS");
		std::cout << "Trimester Completed. ";
		break;

	case 2:
		system("CLS");

		for (auto& students : student)
		{
			std::cout << "Name: " << students->GetID().name << std::endl;
			std::cout << "Address: " << students->GetID().address << std::endl;
			std::cout << "Username: " << students->GetID().username << std::endl;
			std::cout << "Password: " << students->GetID().password << std::endl;
			std::cout << "\n--------------------------------\n";
			std::cout << "Has Disability: " << students->GetID().hasDisability << std::endl;
			std::cout << "Has Student Finance: " << students->GetID().hasStudentFinance << std::endl;
			std::cout << "Years To Study: " << students->GetYearsToStudy() << std::endl;

			system("pause");
		}
		break;

	case 3:
		isUniversityOpen = false;
		break;

	case 4:
		if (trimesterCount == 0)
		{
			//Create Temporary Student ID
			Student::ID id;
			int choice;

			//Choose Student Type
			std::cout << "\nWhich Type Of Student Are You Registering?\n\n[1] Undergraduate\n[2] Postgradate\n[3] Doctorate" << std::endl;
			Utility::Instance()->InputTooltip(); std::cin >> choice;

			switch (choice)
			{
			case 1:
				student.push_back(new Undergraduate(id));
				break;
			case 2:
				student.push_back(new Postgraduate(id));
				break;
			case 3:
				student.push_back(new Doctorate(id));
				break;
			default:
				std::cout << "\nTry Again.\n";
				Utility::Instance()->InputTooltip(); std::cin >> choice;
				break;
			}

			//Register Student Details
			student.back()->RegisterStudent(student.size());
			break;
		}
		break;

	default:
		system("CLS");
		break;
	}
}