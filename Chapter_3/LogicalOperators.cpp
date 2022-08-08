#include <cstdio>

int main(){
    bool a = true;
    bool b = false;

    a = 7; // a will still be 1 (true)

    printf("a is %d\n",a);
    printf("b is %d\n",b);

    printf("size is %zd\n",sizeof(a)*8);

    if (a&&b){
        puts("& and | are true\n");
    }else if (a||b){
        puts("| is true\n");
    }

    if(!a){
        puts("a is false\n");
    }

    if(42>5 && !b){
        puts("true\n");
    }

    if(b!=a){ //acts as xor
        printf("they are not equal");
    }

    return 0;

}