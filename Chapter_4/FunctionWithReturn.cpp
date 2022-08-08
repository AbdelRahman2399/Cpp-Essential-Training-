#include <cstdio>
#include <string>

const std::string & func(){
    const static std::string s = "String"; // use static if you want to return a reference
    return s;
}

int main(){
    const std::string s = func();
    printf("%s",s.c_str());
    return 0;
}