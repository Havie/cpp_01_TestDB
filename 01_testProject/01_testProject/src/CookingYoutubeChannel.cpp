
#include "CookingYoutubeChannel.h"


///For whatever reason you still need  :YoutubeChannel(name) on the end here, but not on header Signature
CookingYoutubeChannel::CookingYoutubeChannel(std::string name, int numVideos) :YoutubeChannel(name)
	{
		numVideos_ = numVideos;
	}

