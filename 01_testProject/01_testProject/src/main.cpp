
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
float annualSalary_;

int main()
{
    // 2 diff ways to new Line/EndLine
    cout << "Enter annualSalary.. \n" << endl;

    cin >> annualSalary_;
    float monthlySalary = annualSalary_ / 12;

    cout << "your monthly salary is " << monthlySalary << endl;
    cout << sizeof(annualSalary_) << " .. is size of float";
    //system("pause>0"); // pause prints the press any key message, the > tells it to redirect output to a file, 0 is the name of the file to redirect to
    cin.get(); //way 2 to pause
    return 0;
}
