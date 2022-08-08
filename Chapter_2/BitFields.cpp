#include <cstdio>

struct Prefs{
    bool likesMusic : 1; // takes 1 bit
    bool hasHair : 1;
    bool hasNet : 1;
    unsigned int numberOfChildren : 4;
};

int main(){

    Prefs homer;
    homer.likesMusic = true;
    homer.hasHair = false;
    homer.hasNet = false;
    homer.numberOfChildren = 3;

    printf("size of homer: %zd bytes", sizeof(homer));


}