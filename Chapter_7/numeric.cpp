// numeric.cpp by Bill Weinman <http://bw.org/>
// updated 2002-07-27
#include <cstdio>
#include <cstdlib>
#include <cmath>

int main()
{
    int neg = -47;
    int x = abs(neg);
    printf("x is %d\n", x);

    const double pi = acos(-1);
    double y = sin(pi/2);
    printf("y is %lf\n", y);




    return 0;
}
