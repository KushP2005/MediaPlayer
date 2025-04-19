#ifndef SEARCH_H
#define SEARCH_H
#include "defs.h"

class Search{
    public:
        bool virtual matches(const Media*) const = 0;
        void virtual print(ostream& o) const = 0;
        virtual ~Search() = default;

        

        friend ostream& operator<<(ostream& o, const Search& s){
            s.print(o);
            return o;
        }
};


class O_Search : public virtual Search{
    private:
        string owner;
    public:
        O_Search(string o) : owner(o) {}
        bool matches(const Media* m) const override{
            return m->getOwner() == owner;
        }
        void print(ostream& o) const override{
            o << "This matches a media with: " << owner;
        }
        string getOwner() const {return owner;}
};

class C_Search: public virtual Search{
    private:
        string category;
    public:
        C_Search(string c) : category(c) {}
        bool matches(const Media* m) const override{
            return m->getCategory() == category;
        }
        void print(ostream& o) const override{
            o << "This matches a media with: " << category;
        }
        string getCategory() const {return category;}
};

class OorC_Search : public O_Search, public C_Search{
    public:
        OorC_Search(string o, string c) : O_Search(o), C_Search(c) {}
        bool matches(const Media* m) const override{
            return O_Search::matches(m) || C_Search::matches(m);
        }
        void print(ostream& o) const override{
            o << "This matches a media with: " << O_Search::getOwner() << " or " << C_Search::getCategory();
        }
};
#endif