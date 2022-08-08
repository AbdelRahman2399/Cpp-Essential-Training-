#include <cstdio>

class C{
    int i=0;
public:
    void setValue(int value){i=value;}
    int getValue(){return i;}
};

int main(){
    int i=47;
    C o1;

    o1.setValue(i);
    printf("value is %d\n", o1.getValue());
    return 0;
}