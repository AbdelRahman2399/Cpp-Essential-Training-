#include <cstdio>

int main(){

    char c=0;
    short int si=0;
    int i=0;
    long int li=0;
    long long int lli=0;

    printf("size of char is %zd bits\n",sizeof(c)*8);
    printf("size of short int is %zd bits\n",sizeof(si)*8);
    printf("size of int is %zd bits\n",sizeof(i)*8);
    printf("size of long int is %zd bits\n",sizeof(li)*8);
    printf("size of long long int is %zd bits\n",sizeof(lli)*8);
    // long int is same as int on this computer
    // use long long int
}