#include <cstdio>

int main(){
    int a[]={1,2,3,4,5};

    for(int i: a){
        printf("i is %d\n",i);
    } //cpp for loop (range-based for loop)

    char s[]="string";
    for(char c: s){
        if (c == 0){
            break;
        }
        printf("c is %c\n",c);
    }
    return 0;
}