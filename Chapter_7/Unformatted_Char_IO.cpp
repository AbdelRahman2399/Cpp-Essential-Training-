#include <cstdio>
#include <iostream>

int main(){
    const int bufsize = 256;
    static char buf[bufsize];
    fputs("prompt: ", stdout);
    fgets(buf, bufsize, stdin); //gets does not check buffer size, while fgets does
    puts("output:");
    fputs(buf, stdout);
    fflush(stdout);
    system("pause");
    return 0;
}