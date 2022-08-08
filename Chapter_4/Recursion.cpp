#include <cstdio>

unsigned long int factorial(unsigned long int x){
    if(x<2){
        return 1;
    }else{
        return x*factorial(x-1);
    }
}

int main(){
    unsigned long int f = factorial(10);
    printf("factorial is %ld:",f);
    return 0;
}