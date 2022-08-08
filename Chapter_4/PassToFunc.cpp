#include <cstdio>
#include <string>

//either put function declaration here or in header file
//pass data using pointers or references to avoid stack overflow; which happens when large data is copied on the stack instead of just their address
void func(int * x);
void func2(int & y);
void func3(const std::string & z);


int main(){
    int i = 9;
    func(&i);
    printf("i is %d\n",i);
    func2(i);
    printf("i is %d\n",i);

    std::string s = "String";
    func3(s);

    return 0;
}

void func(int * x){ //better practice to use pointers when passing by reference
    ++(*x);
}

void func2(int & y){ 
    ++y;
}

void func3(const std::string & z){ //use references when passing data that will not change
    printf("%s",z.c_str());
}