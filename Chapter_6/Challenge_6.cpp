#include <cstdio>
#include <iostream>

template <typename t>

t & fact(const t * x){
    static t y = *x;
    if(y==0){
        y = 1;
        return y;
    }else{
    for(t i=1;i<*x;i++){
        y = (y)*i;
    }
    }
    return y;
}

int main(){
    unsigned long int x = 5;
    unsigned long int f = fact(&x);
    printf("factorial is: %ld\n",f);
    float y = 5;
    float g = fact(&y);
    printf("factorial is: %f\n",g);
    return 0;
}