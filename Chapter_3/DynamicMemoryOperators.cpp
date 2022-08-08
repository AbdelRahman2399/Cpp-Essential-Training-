#include <cstdio>
#include <new>

const long int count= 1024;

int main(){

long int * ip;

try{
    ip = new long int [count];
} catch (std::bad_alloc & ba){
    fprintf(stderr,"Cannot allocate memory (%s)\n", ba.what());
}

for(long int i=0; i<count; i++){
    ip[i]=i;
    printf("%d\n",ip[i]);
}

delete [] ip;
return 0;
}