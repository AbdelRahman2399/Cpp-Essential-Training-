#include <cstdio>

void func(){
    static int i = 5; //if variable is not static -automatic by default- each time the function is called i will be declared with a value of 5
    printf("i is %d\n",i++); //static variables are stored in the main memory, rather than stack -short term memory for functions-
}


int main(){
    func();
    func();
    func();
    return 0;
}