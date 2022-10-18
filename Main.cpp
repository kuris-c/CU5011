#include "University.h"

int main()
{
	//Insantiate the Singleton
	University::Instance();

	while (University::Instance()->IsUniversityOpen())
	{
		University::Instance()->AdvanceTrimester(University::Instance()->GetTrimester());
	}

	system("pause");
}