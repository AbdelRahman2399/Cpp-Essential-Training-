#include <cstdio>

int main(){
    int x = 23;
    int * ip;
    ip = &x;
    const int &y = x; // y is reference of x

    printf("The value is %d\n", x);
    printf("The value is %d\n", * ip);
    printf("The value is %d\n", y);

    // All prints give out the same value

    x = 7; // by changing x ,we change y even though it is const, and consequently, * ip
    printf("The value is %d\n", x);
    printf("The value is %d\n", * ip);
    printf("The value is %d\n", y);
}