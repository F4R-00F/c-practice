#include <stdio.h>
int main()
{
    float R,r,pi,BCA,SCA,area;
    (R=14),(r=10),(pi=3.1416);
    BCA=pi*R*R;
    SCA=pi*r*r;
    area=BCA-SCA;
    printf("Area of Track= %0.2f m^2", area);
    return 0;
}