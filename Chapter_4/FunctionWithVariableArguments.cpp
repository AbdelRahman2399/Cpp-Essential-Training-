#include <cstdio>
#include <cstdarg>

double average(const int count, ...){
    va_list ap;
    int i;
    double total = 0.0;

    va_start(ap,count);
    for(i=0;i<count;i++){
        total+=va_arg(ap,double);
    }
    va_end(ap);
    return (total/count);
}

int main(){
    double av = average(5,1.0,2.0,3.0,4.0,5.0);
    printf("Average is %f",av);
    return 0;
}