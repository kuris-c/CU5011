#include "University.h"

int main()
{
	while (University::Instance()->IsUniversityOpen())
	{
		University::Instance()->AdvanceTrimester(University::Instance()->GetTrimester());
	}

	system("pause");
}