#include <stdio.h>
int main()
{
    float l,w,area;
    printf("Enter the value of l and w:");
    scanf("%f %f", &l, &w);
    area=l*w;
    printf("Result: %.2f", area);
    return 0;
}