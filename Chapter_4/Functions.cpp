#include <cstdio>
#include "func.h"

//either put void func(); here or in header file

int main(){
    puts("this is main()");
    func();
    return 0;
}

void func(){
    puts("this is func()");
}