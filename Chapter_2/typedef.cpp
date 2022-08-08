#include <cstdio>

typedef unsigned char points_t; //points_t is a user-defined alias to unsigned char
typedef unsigned char rank_t;

struct score{
    points_t p;
    rank_t r;
};

int main(){
    score s={5,1};
    printf("you have earned %d points, your rank is %d\n", s.p,s.r);
    return 0;
}