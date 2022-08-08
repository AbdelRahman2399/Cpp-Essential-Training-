#include <cstdio>

unsigned long int & fact(const unsigned long int * x){
    unsigned static long int y = *x;
    for(unsigned long int i=1;i<*x;i++){
        y = (y)*i;
    }
    return y;
}

int main(){
    unsigned long int x = 5;
    unsigned long int f = fact(&x);
    printf("factorial is: %ld",f);
    return 0;
}