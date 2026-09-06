#include<stdio.h>
int main()
{
    float x,y,z,avg;
    printf("Enter the values of x,y and z:");
    scanf("%f %f %f", &x, &y, &z);
    avg=(x+y+z)/3;
    printf("Result:%.2f",avg);
    return 0;
}