
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
    //cout << "Enter annualSalary.. \n" << endl;

    //cin >> annualSalary_;
    //float monthlySalary = annualSalary_ / 12;
    //cout << "your monthly salary is " << monthlySalary << endl;
    cout << sizeof(unsigned int) << " .. is byte size of unsigned Int and max val is : " << UINT_MAX << endl ;
    cout << sizeof(int) << " .. is byte size of int and max val is : " << INT_MAX << endl;
    cout << sizeof(float) << " .. is byte size of float and max val is : " << numeric_limits<float>::max() <<  endl;
    cout << sizeof(double) << " .. is byte size of double and max val is : " << numeric_limits<double>::max() << endl;
    cout << sizeof(char) << " .. is byte size of char  and max val is : " << numeric_limits<char>::max() << endl;
    cout << sizeof(long) << " .. is byte size of long  and max val is : " << numeric_limits<long>::max() << endl;
    cout << sizeof(bool) << " .. is byte size of bool  and max val is : " << numeric_limits<bool>::max() << endl;
    //system("pause>0"); // pause prints the press any key message, the > tells it to redirect output to a file, 0 is the name of the file to redirect to

    //Get multiple inputs:
    float a, b, c;
    cout << "give me a,b,c: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << "All the same #s!" << endl;
    }
    else
    {
        cout << "Not all equal .. "  << endl;;
    }

    // Swap vars without temp:
    //IF a= 20 and b = 10
    cout << "Going to Swap " <<endl << "a= " << a << " b= " << b << endl;
    a = a + b; //30
    b = a - b; //20
    a = a - b; //10
    cout << "a= " << a << " b= " << b << endl;

    cin.get(); //way to pause
    return 0;
}
