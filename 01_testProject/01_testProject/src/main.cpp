
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
float playerOneNum_;
float playerTwoNum_;

int main()
{
	// 2 diff ways to new Line/EndLine
	//cout << "Enter annualSalary.. \n" << endl;

	bool isRunning = true;
	cout << "player 1 enter a # : ";
	cin >> playerOneNum_;
	system("cls"); //Clear console for 2nd p;ayer to not see
	while (isRunning)
	{
		cout << "player 2 enter a # : ";
		cin >> playerTwoNum_;

		isRunning = playerTwoNum_ != playerOneNum_;
		isRunning ? cout <<  "You failed to pick the same numbers\n" : cout << "You picked the same # !\n";
	}

	cout << "GameOver!";

	cin.get(); //way to pause
	return 0;
}
