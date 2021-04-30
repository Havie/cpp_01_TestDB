
//killerbee13 — Today at 5:45 PM
//The C++ standard library also includes the C standard library
//C doesn't have namespaces
//The C++ standard library also contains just a few macros, which also aren't namespaced
//Havie — Today at 5 : 46 PM
//so youre saying "std" stands for c++ standard library, and fully typing "standard library" refers to base C ? im not getting it
//killerbee13 — Today at 5 : 47 PM
//"standard library" is a generic term
//Almost every language has one
//C++ as a language is built partially on top of C
//C has a standard library, which C++ incorporates, but C++ has a lot more as well
//In C++, the C standard library gets declared in parallel both outside and inside std



// TUTORIAL 10hour:  https://www.youtube.com/watch?v=GQp1zzTwrIg


//Includes include the header file for a class
#include "main.h"
#include <iostream>
#include <process.h>
#include <iostream>
#include "YoutubeChannel.h"
#include "CookingYoutubeChannel.h"
#include <list>
#include <string> //Required for getLine() , because namespace std doesnt import it all? https://en.cppreference.com/w/cpp/header/string 
// this is the entire file for #include<string>
// https://github.com/microsoft/STL/blob/main/stl/inc/string
// BUT In order to figure out how the hell this works, there is no namespace std {} anywhere in the file, somehow it gets set via a macro
// so need to learn what macros and templates are. very foreign syntax 
//So basic_string is defined on line 2377 of xstring
//I assume <iostream> also includes <xstring>
//But getline is defined inside <string>
//That's why you can use std::string when you include iostream, but you can't use std::getline
//This is actually a long chain
//iostream > istream > ostream > ios > xlocnum > streambuf > xiosbase > system_error > stdexcept > xstring
//That was absolutely a waste of 10 minutes

//using namespace std;  this is "bad" practice





int main()
{
	std::string channelName;
	std::cout << "Enter Youtube Channel Name: ";
	// How to get a line with white spaces
	std::getline(std::cin, channelName);

	YoutubeChannel myChannel(channelName);
	myChannel.Subscribe();
	myChannel.GetInfo();

	CookingYoutubeChannel cookingChannel("cooking Things 420" , 100);
	cookingChannel.Subscribe();
	cookingChannel.Subscribe();
	cookingChannel.GetInfo();


	std::cout << "\n";

	std::cin.get(); //way to pause
	return 0;
}
