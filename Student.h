//Header Guard
#pragma once

//C++ Libraries
#include <string>

class Student
{
public:
	//Constructor
	Student() {};
	Student(int idNumber, std::string name, std::string address, std::string username, std::string password, bool hasDisability = false, int studentFinanceAmount = 0)
		: idNumber(idNumber), name(name), address(address), username(username), password(password), hasDisability(hasDisability), studentFinanceAmount(studentFinanceAmount) {};

	//Getters
	int GetIDNumber() const;
	std::string GetName() const;
	std::string GetAddress() const;
	std::string GetUsername() const;
	std::string GetPassword() const;
	bool HasDisability() const;
	int StudentFinanceAmount() const;
	int GetCredits() const;
	virtual int GetYearsToStudy() const = 0;

	//Setters
	void SetCredits(int creditsAmount);
	void SetYearsToStudy(int yearsAmount);

	//Action Functions
	void RegisterStudent(int studentNumber);
	//virtual void Learn() = 0;

protected:
	//Student Information
	int idNumber{ 0 };
	std::string name{};
	std::string address{};
	std::string username{};
	std::string password{};

	bool hasDisability{ false };
	int studentFinanceAmount{ 0 };

	//Course Information
	int credits{ 0 };
	int yearsToStudy{ 0 };
};