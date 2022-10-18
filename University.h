#pragma once
//Header Files
#include "Student.h"

class University
{
public:
	//Singleton
	static University* Instance();

	//Getters
	std::string GetUniversityName() const;
	std::string GetUniversityAddress() const;
	bool IsUniversityOpen() const;
	int GetTrimester() const;

	//Action Functions
	void AdvanceTrimester(int currentTrimester);

private:
	//Constructors
	University(std::string uniName, std::string uniAddress) : name(uniName), address(uniAddress) {};
	University(const University& university) {};
	University& operator=(const University& university) {};

	//University Information
	std::string name;
	std::string address;
	bool isUniversityOpen{ true };

	//Student Count
	static const int maxNumberOfStudents{ 100 };
	std::vector<Student> student;	

	//Offered Modules
	enum class Modules
	{
		//GAMES PROGRAMMING
		//Year 1
		ComputerGamingHardware = 30,
		GameDesignAndDevelopment = 30,
		GameProgramming = 30,
		LogicAndMathematicalTechniques = 30,

		//Year 2
		AdvancedCPPForGames = 30,
		AugmentedToyDevelopment = 30,
		GameEngineDevelopment = 30,
		GraphicsAndShaderProgramming = 30,

		//Year 3
		ArtificialIntelligence = 15,
		ArtificalIntelligenceForGames = 15,
		CreativeTechnologyProject = 30,
		NetworkingForGames = 15,
		PrototypeDevelopment = 30,
		ResearchRelatedLearning = 15,
		WorkRelatedLearningForGamesAndAnimation = 15
	};

	//Year Progress
	int trimesterCount{ 0 };

	//Private Action Functions
	void ProcessInput(int input);
};