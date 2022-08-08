#include <cstdio>

int main(){
    char s[]="string";

    for(char * p = s;* p;p++){
        printf("element is %c\n",*p);
    } // C for loop

    return 0;
}