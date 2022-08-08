#include <cstdio>


void f( int i ) {
    printf("the int is %d\n", i);
}

void f( const char * s ) {
    printf("the pointer is %p\n", s);
}

int main() {
    f(nullptr); //will call second function as nullptr can be promoted to any pointer type
    return 0;
}