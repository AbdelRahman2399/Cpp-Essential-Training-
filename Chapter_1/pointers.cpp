#include <cstdio>

int main(){
    int x = 23;
    int * ip;
    ip = &x;
    int y = * ip;

    printf("The value is %d\n", x);
    printf("The value is %d\n", * ip);
    printf("The value is %d\n", y);

    // All prints give out the same value

    x = 7;
    printf("The value is %d\n", * ip);
}