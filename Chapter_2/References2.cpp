#include <cstdio>
//references, unlike pointers, cannot be null, uninitialized or changed to refer to another value

int & f(int & i){
    return ++i;
}
int main(){
    int i = 5;
    f(i);
    printf("i is %d\n",i); //i will be 6 > changing the value of a reference changes the value of the refered to variable
} // to avoid this > const int & i > cannot change reference value > refered to variable is not changed