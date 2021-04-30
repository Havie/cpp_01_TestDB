#pragma once
#include "YoutubeChannel.h"

class CookingYoutubeChannel : public YoutubeChannel
{
public:
	//For whatever reason you dont include ":YoutubeChannel(name)" on header signature
	CookingYoutubeChannel(std::string name, int numVideos);
};