// func-overload.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
// multiple functions can have same name
// function signature constists of: return type, function name, parameter types and number of parameters
// therefore, it is possible for two functions to have the same name, as long as they differ in return type, parameter type or number of function parameters
#include <cstdio>

constexpr double d_pi = 3.141592653589793;

// volume of a cube
double volume( double a ) {
    printf("cube of %.3lf\n", a);
    return a * a * a;
}

// volume of a cylinder
double volume( double r, double h ) {
    printf("cylinder of %.3lf x %.3lf\n", r, h);
    return d_pi * r * r * h;
}

// volume of a cuboid
double volume( double a, double b, double c ) {
    printf("cuboid of %.3lf x %.3lf x %.3lf\n", a, b, c);
    return a * b * c;
}

int main() {
    printf("volume of a 2 x 2 x 2 cube: %.3lf\n", volume(2.0));
    printf("volume of a cylinder, radius 2, height 2: %.3lf\n", volume(2.0, 2.0));
    printf("volume of a 2 x 3 x 4 cuboid: %.3lf\n", volume(2.0, 3.0, 4.0));
    return 0;
}
