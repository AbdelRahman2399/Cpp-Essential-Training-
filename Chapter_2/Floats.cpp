#include <cstdio>

int main(){
    float f;
    double df;
    long double ldf;

    printf("size of float f is %zd bits\n", sizeof(f)*8);
    printf("size of double df is %zd bits\n", sizeof(df)*8);
    printf("size of long double ldf is %zd bits\n", sizeof(ldf)*8);

    f = 0.1 + 0.1 + 0.1;
    printf("f is %1.10f\n",f); //outputs 0.3000000119 instead of 0.3
    df = 0.1 + 0.1 + 0.1;
    printf("df is %1.20f\n",df); //doesn't output 0.3 exactly too (0.30000000000000004000 instead of 0.3)

    //If you want to be precise, use int rather than float
}