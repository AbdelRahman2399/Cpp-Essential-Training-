// const > cannot change value/type
//static > has storage duration beyond duration of block, duration of program
//register > data is easier and faster to operate on
//extern > 

#include <cstdio>

class S{
public:
    int static_value(){
        static int x=7; // is initialized once only, then continues to exist throughout program
        return ++x;
    }

};

int func(){
    int x=7;
    return ++x;
}

int main(){
    int i=func();
    i=func();
    printf("i is %d\n",i); //outputs 8

    S c1;

    int j=c1.static_value();
    j=c1.static_value();
    printf("j is %d\n",j); //outputs 9

    S s1;
    S s2;
    S s3;

    printf("integer is %d\n",s1.static_value()); //10
    printf("integer is %d\n",s2.static_value()); //11
    printf("integer is %d\n",s3.static_value()); //12
// Although these are three seperate instances of the class, they share the same static int
//Static data is stored with class and not the object
    return 0;

}