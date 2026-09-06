#include <stdio.h>
int main()
{
    float f,c;
    printf("Enter the value of Fahrenheit:");
    scanf("%f", &f);
    c=(f-32)*5/9;
    printf("Result: %.2f", c);
    return 0;
}
