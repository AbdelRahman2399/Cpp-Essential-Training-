#include <cstdio>

int main(){
    //implicit cast
    int x = 5;
    long long int y;
    y=x;
    // x=y; you could lose data because int takes up less space than long long int
    
    //explicit cast
    x=(int)y; //Note: cannot cast string to int (Types must be compatible)

    return 0;
}