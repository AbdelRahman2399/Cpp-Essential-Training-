#include <cstdio>

int main(){

    int x = 5;
    printf("x is %d\n",++x); //x=6 (prefix version)
    printf("x is %d\n",++x); //x=7
    int y = 5;
    printf("y is %d\n",y++); //y=5 (postfix version)
    printf("y is %d\n",y++); //y=6
    


    return 0;
}