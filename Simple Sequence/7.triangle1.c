#include <stdio.h>
int main()
{
    float b,h,area;
    printf("Enter the value of b and h:");
    scanf("%f %f", &b, &h);
    area=0.5*b*h;
    printf("Result: %.2f", area);
    return 0;
}