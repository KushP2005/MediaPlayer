#include "MediaTube.h"

bool MediaTube::addChannel(Channel* c){
    if(mt.getSize() < MAX_ARR){
        mt += c;
        return true;
    }
    return false;
}
bool MediaTube::addMedia(Media* m, const string& channelTitle){
    for(int i = 0; i < mt.getSize(); i++){
        if(mt[i]->equals(channelTitle)){
            mt[i]->addMedia(m);
            return true;
        }
    }
    cout << "Channel not found" << endl;
    return false;
}

Channel* MediaTube::getChannel(const string& title) const{
    for(int i = 0; i < mt.getSize(); i++){
        if(mt[i]->equals(title)){
            return mt[i];
        }
    }
    cout << "Channel not found" << endl;
    exit(1);
    return nullptr;
}
Channel* MediaTube::getChannel(int index) const{
    if(index >= 0 && index < mt.getSize()){
        return mt[index];
    }
    cout << "Index out of bounds" << endl;
    exit(1);
    return nullptr;
}
Array<Media*>& MediaTube::getMedia(const Search& s, Array<Media*>& arr){
    for(int i = 0; i < mt.getSize(); i++){ 
        for(int j = 0; j < mt[i]->getSize(); j++){
            Media* original = mt[i]->get(j);
            if(s.matches(original)){
                Media* copy = new Media(original->getChannelTitle(),original->getOwner(), original->getMediaTitle(),original->getCategory(),original->getAudioContent(),original->getVideoFile());
                arr += copy;
            }
        }
    }
    return arr;
}