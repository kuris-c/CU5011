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

int University::GetNumberOfStudents() const
{
    return static_cast<int>(student.size());
}

void University::SetTrimester(int addTrimester)
{
    trimesterCount += addTrimester;
}

void University::SetUniversityName(std::string newName)
{
    name = newName;
}

void University::SetUniversityAddress(std::string newAddress)
{
    address = newAddress;
}

void University::SetIsUniversityOpen(bool isOpen)
{
    isUniversityOpen = isOpen;
}

void University::AdvanceTrimester()
{
    int choice;

    if (trimesterCount != 0)
    {
        std::string options[3] = { "Advance Another Trimester.", "Display Registered Students.", "Exit Application." };
        Utility::DisplayList(options, 3);
    }

    else
    {
        std::string options[4] = { "Advance Another Trimester.", "Display Registered Students.", "Exit Application.", "Add Another Student." };
        Utility::DisplayList(options, 4);
    }

    Utility::InputTooltip();
    std::cin >> choice;
    ProcessInput(choice);
}

void University::ProcessInput(int input)
{
    switch (input)
    {
    case 1:
        if (trimesterCount != 3)
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
            std::string options[8] = { "Name: " + students->GetName(),
                "Address: " + students->GetAddress(),
                "Username: " + students->GetUsername(),
                "Password: " + students->GetPassword(),
                "\n-------------------\n",
                "Has Disability: " + students->HasDisability(),
                "Student Finance Amount: " + students->StudentFinanceAmount(),
                "Years Of Study Left: " + students->GetYearsToStudy() };
            Utility::DisplayList(options, 8);

            system("pause");
        }

        break;

    case 3:
        isUniversityOpen = false;

        break;

    case 4:
        if (trimesterCount == 0)
        {
            int choice;

            //Choose Student Type
            std::cout << "Which type of Student are you registering?\n";
            std::string options[3] = { "Undergraduate", "Postgraduate", "Doctorate" };
            Utility::DisplayList(options, 3);

            Utility::InputTooltip(); std::cin >> choice;

            switch (choice)
            {
            case 1:
                student.push_back(new Undergraduate());
                break;
            case 2:
                student.push_back(new Postgraduate());
                break;
            case 3:
                student.push_back(new Doctorate());
                break;
            default:
                std::cout << "\nTry Again.\n";
                Utility::InputTooltip(); std::cin >> choice;
                break;
            }

            //Register Student Details
            student.back()->RegisterStudent(student.size());

            break;
        }
    default:
        system("CLS");
        break;
    }
}