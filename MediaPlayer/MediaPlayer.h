#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H
#include "Media.h"
#include <fstream>
class MediaPlayer {
    public:
        virtual void play(ostream& os, const Media& m) = 0;
        friend MediaPlayer& operator<<(MediaPlayer& player, const Media& media){
            player.play(cout, media);
            return player;
        }
};

#endif

class AudioPlayer: public MediaPlayer {
    public:
        virtual void play(ostream& os, const Media& audio){
            os << "Playing audio: " << audio.getAudioContent() << endl;
        }
};

class VideoPlayer: public AudioPlayer {
    public:
        virtual void play(ostream& os, const Media& audio){
            os << "Playing audio: " << audio.getAudioContent() << endl;
            ifstream file(audio.getVideoFile());
            if(file.is_open()){
                string line;
                while(getline(file, line)){
                    os << line << endl;
                }
                file.close();
            }
        }
};