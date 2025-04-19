#include "Media.h"
#include <iostream>
void Media::print(std::ostream& o) const {
    o << "Channel Title: " << channelTitle << std::endl;
    o << "Owner: " << owner << std::endl;
    o << "Media Title: " << mediaTitle << std::endl;
    o << "Category: " << category << std::endl;
    o << "Audio Content: " << audioContent << std::endl;
    o << "Video File: " << videoFile << std::endl;
   o << "Video File: " << videoFile << std::endl;
};