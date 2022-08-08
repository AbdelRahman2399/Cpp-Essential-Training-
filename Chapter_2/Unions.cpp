//Unions use same memory space for different types

#include <cstdio>
#include <cstdint>

union ipv4{
    uint32_t i32;
    struct {
        uint8_t a;
        uint8_t b;
        uint8_t c;
        uint8_t d;

    }Octets;
};

int main(){
    ipv4 x;
    x.Octets = {192, 168, 73, 42};
    printf("ip address is %d.%d.%d.%d\n",x.Octets.a,x.Octets.b,x.Octets.c,x.Octets.d);
    printf("ip in hexa is %08x\n",x.i32);
    return 0;

}