#include <iostream>
#include <string>


template <typename T> //definition of templates must be outside any function block
T maxof( T a, T b){
    return (a>b ? a:b);
}

int main(){
    std::cout << maxof<int>(7,9) << std::endl;
    std::cout << maxof<std::string>("aaa","bbb") << std::endl;
    std::cout << maxof(23,9) << std::endl; // template argument deduction -> compiler deduces the type of argument
    return 0;
}