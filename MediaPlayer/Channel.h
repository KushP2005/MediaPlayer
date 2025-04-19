#ifndef CHANNEL_H
#define CHANNEL_H

#include "defs.h"
#include "Array.h"
#include "Media.h"

class Channel {
    private:
        Array<Media*> media;
        string title, owner;
    public:
        Channel(string title, string owner): title(title), owner(owner) {}

        bool equals(const string& title);
        Media* get(int index) const;
        int getSize() const {
            return media.getSize();
        }
        void print(ostream& os) const;
        void printWithMedia(ostream& os)const;
        bool addMedia(Media* m);

        friend ostream& operator<<(ostream& os, const Channel& c) {
            c.print(os);
            return os;
        }
        
};

#endif