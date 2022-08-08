#include <cstdio>
#include <string>

class Book{
std::string name = "";
std::string author = "";

public:
Book();
Book(const std::string & n, const std::string & a);
Book(const Book &);
~Book();
Book & operator = (const Book &);
void print();
std::string names(){return name; };
std::string authors(){return author; };
};

Book::Book() : name("unknown"), author("unknown"){
}

Book::Book(const std::string & n, const std::string & a) : name(n), author(a){
}

Book::Book(const Book & o){
    if(this != &o){
        this->name = o.name;
        this->author = o.author;
    }
}

Book::~Book(){
    printf("destructor: %s by %s\n",name.c_str(),author.c_str());
    name = "";
    author = "";
}

Book& Book::operator = (const Book & o){
    if(this != &o){
        this->name = "clone - " + o.name;
        this->author = "clone - " + o.author;
    }
    return *this;
}

void Book::print(){
    printf("%s by %s\n", name.c_str(), author.c_str());
}

Book operator + (Book & a,Book & b){
Book x(a.names() + b.names(),a.authors() + b.authors());
return x;

}

int main(){
    Book b1;
    b1.print();

    Book b2("hp","j.k");
    b2.print();

    b1 = b2;
    b1.print();
    Book b3;
    b3 = (b1+b2);
    b3.print();




}