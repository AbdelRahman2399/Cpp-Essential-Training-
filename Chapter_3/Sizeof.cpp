#include <cstdio>

int main(){
    int x = 5;
    size_t y = sizeof(x);//could also do sizeof(int), for instance 
    printf("size of x is %zd\n", y);

    struct z{// Structs, Classes and Unions are types
        int a;
        int b;
        char c;
    };

    y = sizeof(z);//Note: Z is a type, not a variable
    printf("size of z is %zd\n", y);


    return 0;
}