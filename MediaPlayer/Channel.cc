#include "Channel.h"

bool Channel::equals(const string& title){
    return this->title == title;
}
void Channel::print(ostream& os) const {
    os << "Channel: " << title << " Owner: " << owner << endl;
}
void Channel::printWithMedia(ostream& os) const {
    os << "Channel: " << title << " Owner: " << owner << endl;
    for (int i = 0; i < media.getSize(); ++i) {
        media[i]->print(os);
    }
}
Media* Channel::get(int index) const {
    if (index < 0 || index >= media.getSize()) {
        cerr << "Media index out of bounds" << endl;
        exit(1);
    }
    return media[index];
}
bool Channel::addMedia(Media* m) {
    if(getSize() > MAX_ARR){
        return false;
    }
    media += m;
    return true;
}