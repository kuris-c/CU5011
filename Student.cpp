#include "Student.h"

int Student::GetIDNumber() const
{
    return idNumber;
}

std::string Student::GetName() const
{
    return name;
}

std::string Student::GetAddress() const
{
    return address;
}

std::string Student::GetUsername() const
{
    return username;
}

std::string Student::GetPassword() const
{
    return password;
}

bool Student::HasDisability() const
{
    return hasDisability;
}

int Student::StudentFinanceAmount() const
{
    return studentFinanceAmount;
}

int Student::GetCredits() const
{
    return credits;
}

void Student::SetCredits(int creditsAmount)
{
    credits += creditsAmount;
}

void Student::SetYearsToStudy(int yearsAmount)
{
    yearsToStudy += yearsAmount;
}

void Student::RegisterStudent(int studentNumber)
{
    idNumber = studentNumber;

    system("CLS");

    //Name
    
}