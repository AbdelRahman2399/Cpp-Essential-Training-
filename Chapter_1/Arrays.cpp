#include <cstdio>

int main(){
    int a[5];
    int * p = a; // pointer to first element of array
    int i;
    for(i=0;i<5;i++){
        *p = i+1; // assign value to element of array the pointer is pointing to
        p++; // increment pointer (points to next element of array as it increases by size int)
    }
    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
    }

    return 0;

}