#include <cstdio>

void func(){
    puts("This is func");
}

int main(){
    puts("This is main");
    void (*pfunc)()= func;
    (*pfunc)();
    return 0;
}