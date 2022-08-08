#include <cstdio>

int main(){
    int x = 5;
    int y = 42;

    printf("logic value is %d\n",x==y);

    if(x==y){//comparison for equality
        puts("x=y\n");
    }else if(x!=y){
        puts("x doesn't equal y");
        if(x>y){
            puts("x>y");
        }else{
            puts("x<y");
        }
    }
    // there is also >= and <=
}