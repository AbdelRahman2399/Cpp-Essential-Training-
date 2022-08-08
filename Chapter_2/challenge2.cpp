//Create a catalog card
//It will contain Title,Author,Publisher,Subject,ISBN,OCLC,Dewey decimal,year published,year acquired, quantity in stock
#include <cstdio>
#include <cstdint>

struct Book{
    const char* title;
    const char* author;
    const char* publisher;
    const char* subject;
    union{
        struct{
            uint16_t first;
            unsigned int second : 4;
            uint8_t third;
            uint32_t fourth;
            unsigned int fifth : 4;

        } num;
        uint64_t isbn_n;

    }ISBN;
    uint32_t OCLC;
    union{
        struct{
            uint16_t fn;
            uint8_t sn;
        }Deci;
        unsigned int DD : 24;
    }Dewy;
    uint16_t yearofpub;
    uint16_t yearacq;
    uint16_t no_of_copies;
};

void print(const Book & i){
printf("Title:%s\nAuthor:%s\nPublisher:%s\nSubject:%s\n",i.title,i.author,i.publisher,i.subject);
printf("isbn number : %d-%d-%d-%d-%d\n",i.ISBN.num.first,i.ISBN.num.second,i.ISBN.num.third,i.ISBN.num.fourth,i.ISBN.num.fifth);
printf("OCLC number : %d\n",i.OCLC);
printf("Dewy number : %d.%d\n",i.Dewy.Deci.fn,i.Dewy.Deci.sn);
}

int main(){
    Book hp;
    hp={"harry potter","j.k rowling", "penguin","fiction",{978,3,16,148410,0}, 287, {510,78},2022,2022,23};
    print(hp);

}