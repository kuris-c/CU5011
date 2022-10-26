//Header Files
#include "Screen.h"

int main(int argc, char* argv[])
{
	Screen::Instance()->Initialise("Route 51", 1600, 900);
	system("pause");
	return 0;
}