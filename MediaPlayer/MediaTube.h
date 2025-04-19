#ifndef MEDIATUBE_H
#define MEDIATUBE_H
#include "Array.h"
#include "defs.h"
#include "Channel.h"
#include "Media.h"   
#include "Search.h"
class MediaTube {
    private:
        Array<Channel*> mt;
    public:
        bool addChannel(Channel* c);
        bool addMedia(Media* m, const string& channelTitle);
        const Array<Channel*>& getChannels() const{
            return mt;
        }
        Channel* getChannel(const string& title) const;
        Channel* getChannel(int index) const;
        Array<Media*>& getMedia(const Search& s, Array<Media*>& arr);

};

#endif