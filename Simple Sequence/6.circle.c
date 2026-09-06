#include <stdio.h>
int main()
{
    float r,area,pi;
    printf("Enter the value of r:");
    scanf("%f", &r);
    pi=3.1416;
    area=pi*r*r;
    printf("Result: %.2f", area);
    return 0;
}