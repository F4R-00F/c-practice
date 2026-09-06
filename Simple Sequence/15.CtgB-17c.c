#include<stdio.h>
int main()
{
    float a,b,c,avg;
    printf("Enter the values of a,b and c:");
    scanf("%f %f %f", &a, &b, &c);
    avg=(a+b+c)/3;
    printf("%.2f",avg);
    return 0;
}