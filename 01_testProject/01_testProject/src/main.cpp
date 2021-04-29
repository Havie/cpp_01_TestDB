
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

#include <iostream>
#include <list>
#include <string> //Required for getLine()



class YoutubeChannel
{
private:
	string name_;
	int subscribers_;
protected:
		int numVideos_;
public:
	YoutubeChannel(string name) 
	{
		name_ = name;
		subscribers_ = 0;
	}
	void Subscribe()
	{
		++subscribers_;
	}
	void GetInfo()
	{
		cout << "Your Channels name is: " << name_ << endl;
		cout << "You have : " << subscribers_ << " subscribers" << endl;
	}

};

//public in front of intheritance means it copies all the same public functions? idk why it wouldnt..?
class CookingYoutubeChannel : public YoutubeChannel
{
public:
	CookingYoutubeChannel(string name, int numVideos):YoutubeChannel(name)
	{
		numVideos_ = numVideos;
	}

};

int main()
{
	string channelName;
	cout << "Enter Youtube Channel Name: ";
	// How to get a line with white spaces
	getline(cin, channelName);

	YoutubeChannel myChannel(channelName);
	myChannel.Subscribe();
	myChannel.GetInfo();

	CookingYoutubeChannel cookingChannel("cooking Things 420" , 100);
	cookingChannel.Subscribe();
	cookingChannel.Subscribe();
	cookingChannel.GetInfo();


	cout << "\n";

	cin.get(); //way to pause
	return 0;
}
