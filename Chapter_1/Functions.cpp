#include <cstdio>

int fun(int * i,const char * s){
    printf("function variables are %d,%s\n",* i,s);
    return 0;
}

int main(){
    int i = 3;
    const char * s ="string";
    int x = fun(&i,s);
    printf("x is %d",x);
    return 0;

}