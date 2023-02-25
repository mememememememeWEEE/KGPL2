// KGPL.cpp : Defines the entry point for the application.
//

#include "src/KGPL.h"

using namespace std;

int main()
{
	KGPL::Window window(500, 500, "h");
	cout << window.getTitle();
	return 0;
}
