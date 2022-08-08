#include <cstdio>

int main(){
    int x = 5;
    int y = 47;

    y+=x; //compound operation (y is evaluated once, no need to copy to y, more effecient)

    printf("x is:%d\n",x);
    printf("y is:%d\n",y);

    return 0;
}