#include <cstdio>
#include <typeinfo>

struct A{ int x;};
struct B{ int x;};

A a1;
A a2;
B b1;
B b2;

int main(){
    if(typeid(a1) == typeid(B)){
        puts("same\n");
    }else{
        puts("different\n");
    }

    printf("Type is %s\n", typeid(B).name());
    return 0;
}