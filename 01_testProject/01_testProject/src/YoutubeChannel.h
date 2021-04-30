#pragma once
//#ifndef _YTCHANNEL_H // (instead of pragma once ---> If this file does not already exist, import it
//#define _YTCHANNEL_H

//Cant right click "open document" on include names
#include <iostream> // in the C StandardLibrary 
#include <io.h> // In the C++ Library
class YoutubeChannel
{
private:
	std::string name_;
	int subscribers_;
protected:
	int numVideos_;
public:
	YoutubeChannel(std::string name);
	void Subscribe();
	void GetInfo();
};


//#endif