#include <stdio.h>
#include "lib/angle.h"
int main(){
    
    double d = 180.0;
    double r = 1;

    printf("deg2rad(%.3f) = %.3f\n", d, deg2rad(d));
    printf("rad2deg(%.3f) = %.3f\n", r, rad2deg(r));

    return 0;
}