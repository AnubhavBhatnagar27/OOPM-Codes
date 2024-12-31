// Design a class hierarchy for a library system with classes such as Book, Fiction, NonFiction. Use inheritance to show the relationships and demonstrate the concept of the "is-a" relationship.
#include<bits/stdc++.h>
using namespace std;
class Book{
    protected:
    string title;
    string author;
    string publisher;
    int year_published;
    public:
    Book(string t,string a, string p, int y){
        title=t;
        author=a;
        publisher=p;
        year_published=y;
    }
    virtual void getBookinfo() const{
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Publisher: "<<publisher<<endl;
        cout<<"Year Published: "<<year_published<<endl;
    }
    virtual ~Book() = default;
};
class Fiction:public Book{
    private:
        string genre;
    public:
        Fiction(string t,string a, string p, int y,string g):Book(t,a,p,y){
            genre=g;
        }
        void getBookinfo() const override{
            Book::getBookinfo();
            cout<<"Genre: "<<genre<<endl;
        }
};
class NonFiction:public Book{
    private:
    string subject;
    public:
    NonFiction(string t,string a,string p, int y,string s):Book(t,a,p,y){
        subject=s;
    }
    void getBookinfo() const override{
        Book::getBookinfo();
        cout<<"Subject: "<<subject<<endl;
    }
};
int main(){
    Fiction fictionbook("The White Tiger","Aravind Adiga","HarperCollins India",2008,"Fiction");
    NonFiction nonfictionbook("Freedom at Midnight","Larry Collins and Dominique Lapierre","Vikas Publishing House",1975,"Non-Fiction");
    cout<<"Fiction Book Info: "<<endl;
    fictionbook.getBookinfo();
    cout<<"Non-Fiction Book Info: "<<endl;
    nonfictionbook.getBookinfo();
return 0;
}