#ifndef MEDIA_H
#define MEDIA_H
#include "defs.h"

class Media {
    private:
        string channelTitle, owner, mediaTitle, category, audioContent, videoFile;

    public:
        Media(const string& channelTitle, const string& owner, const string& mediaTitle, const string& category, const string& audioContent, const string& videoFile)
            :channelTitle(channelTitle), owner(owner), mediaTitle(mediaTitle), category(category), audioContent(audioContent), videoFile(videoFile){}

        string getChannelTitle() const { return channelTitle; }
        string getOwner() const { return owner; }
        string getMediaTitle() const { return mediaTitle; }
        string getCategory() const { return category; }
        string getAudioContent() const { return audioContent; }
        string getVideoFile() const { return videoFile; }

        void print(std::ostream& o) const;

        friend std::ostream& operator<<(std::ostream& o, const Media& m){
            m.print(o);
            return o;
        }
};

#endif
