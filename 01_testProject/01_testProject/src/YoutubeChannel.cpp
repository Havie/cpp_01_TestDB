#include "YoutubeChannel.h"



	YoutubeChannel::YoutubeChannel(std::string name)
	{
		name_ = name;
		subscribers_ = 0;
	}
	void YoutubeChannel::Subscribe()
	{
		++subscribers_;
	}
	void YoutubeChannel::GetInfo()
	{
		std::cout << "Your Channels name is: " << name_ << std::endl;
		std::cout << "You have : " << subscribers_ << " subscribers" << std::endl;
	}
