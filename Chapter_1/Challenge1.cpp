#include <cstdio>

int main(){
    char s[] = "This is a string";
    int count = 0;
    for(char i: s){
        if(i!=0){
            count++;
        }else{
            break;
        }
    }
    printf("Number of string elements is %d",count);
}