
#include "main.h"
#include <iostream>
#include <process.h>
using namespace std; //Stop having to do std::cout

// TUTORIAL FOR SET UP https://www.youtube.com/watch?v=qeH9Xv_90KM
// In Solution Explorer toggle "Show all Files" to hide weird folder options
// Create your own src folder (right click)
// put ur main in src
// Right click project --> Properties -->Configuration Properties-> General :
// Change To All Configure and All Platforms:
// Change OUTPUT DIR : $(SolutionDir)\bin\$(Platform)\$(Configurations)
// Change INTERMEDIATE DIR:  $(SolutionDir)\bin\$(Platform)\Intermediaries\$(Configurations)

//SRC Control add: *.opensdf and * .opendb to fix fatalError to gitignore

// TUTORIAL 10hour:  https://www.youtube.com/watch?v=GQp1zzTwrIg

///C++ member vars end w _ 


int main()
{
	int year, month;
	cout << "Enter Year, Month: ";
	cin >> year >> month;

	//Idk what we were doing here?
	switch (month)
	{
		case 2:
		{
			(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
				cout << "29 day month. " : cout << "28 day month.  ";
			break;
		}
		case 4:
		{
			break;
		}
		case 6:
		{
			break;
		}
		case 11:
		{
			cout << "30 day month. ";
			break;
		}
		case 12: cout << "31 day month."; break;
		default:  cout << "Can also do this with no curly brackes..."; break;
	}

	cout << "\n";

	cin.get(); //way to pause
	return 0;
}
