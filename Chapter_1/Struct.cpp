#include <cstdio>

struct S{
    int i;
    double d;
    const char * s;
};

int main(){
    S s1 = {3,47.9,"string"};

    s1.d=73.3;

    printf("s is: %d, %f,%s",s1.i,s1.d,s1.s);

    return 0;
}