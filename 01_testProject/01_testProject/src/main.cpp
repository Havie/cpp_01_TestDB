
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

#include <iomanip> //allows a setw() which inserts empty space?

int main()
{
	int height, width;
	cout << "Enter height , width: \n ";
	cin >> height >> width;
	char symbol;
	cout << "Enter Symbol: \n";
	cin >> symbol;
	cout << endl;
	cout << "Drawing..";
	cout << endl;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << setw(3) << symbol;
		}
		cout << endl;
	}




	cout << "\n";

	cin.get(); //way to pause
	return 0;
}
