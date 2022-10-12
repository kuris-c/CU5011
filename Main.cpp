#include "University.h"

int main()
{
	University uni("London Metropolitan University", "166-220 Holloway Rd\nLondon\nN7 8DB");

	while (uni.GetIsUniversityOpen())
	{
		system("CLS");
		uni.TeachTrimester();
	}

	system("pause");
}