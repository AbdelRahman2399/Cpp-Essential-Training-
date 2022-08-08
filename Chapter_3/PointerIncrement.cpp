#include <cstdio>
#include <cstdint>

void printp(uint8_t *p){
    printf("pointer is %p,value is %d\n", p, *p);
}

int main(){
    uint8_t arr[5] = {1,2,3,4,5};
    uint8_t *p = arr;
    printp(++p); //if pointer is uint8_t, it increments by 1 byte and points to next element of array, if it is uint16_t, it will increment by 2 bytes,...
    printp(++p);
    printp(++p);

    return 0; 
}