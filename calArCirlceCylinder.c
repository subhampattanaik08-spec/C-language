#include <stdio.h>

int main() {
    int r,h,area,volume;
    scanf ("%d %d", &r, &h);
    area = 2*3.14*r*r;
    volume = 3.14*r*r*h;
    printf ("area of circle is %d\n", area);
    printf ("volume of cylinder is %d\n", volume);
    return 0;
}