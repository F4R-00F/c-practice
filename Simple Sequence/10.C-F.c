#include <stdio.h>
int main()
{
    float c,f;
    printf("Enter the value of Celcius:");
    scanf("%f", &c);
    f=(9*c/5)+32;
    printf("Result: %.2f", f);
    return 0;
}