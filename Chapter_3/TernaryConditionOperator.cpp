#include <cstdio>

int main(){
    int x = 9;
    int y = 23;
    const char* s = x>y ? "yes" : "no";
    printf("%s",s);
    return 0;
}