#include<stdio.h>
int main()
{
    float a,b,q;
    printf("Enter the value of a and b:");
    scanf("%f %f", &a, &b);
    q=a/b;
    printf("Result: %.2f", q);
    return 0;
}