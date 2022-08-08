#include <cstdio>
#include <cstdint>

int main(){
    printf("size of int8_t is %ld bits\n", sizeof(int8_t)*8);
    printf("size of int16_t is %ld bits\n", sizeof(int16_t)*8);
    printf("size of int32_t is %ld bits\n", sizeof(int32_t)*8);
    printf("size of int64_t is %ld bits\n", sizeof(int64_t)*8);

    printf("size of uint8_t is %ld bits\n", sizeof(uint8_t)*8);
    printf("size of uint16_t is %ld bits\n", sizeof(uint16_t)*8);
    printf("size of uint32_t is %ld bits\n", sizeof(uint32_t)*8);
    printf("size of uint64_t is %ld bits\n", sizeof(uint64_t)*8);
    //These integers are the same size regardless of cpu architecture   
}