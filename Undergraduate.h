#pragma once
//Header Files
#include "Student.h"

class Undergraduate : public Student
{
public:
	//Constructor
	using Student::Student;

	//Getters
	int GetYearsToStudy() const override;

	//Setters


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

	//Action Functions
	//void Learn() override;

protected:
	int yearsToStudy{ 3 };
};