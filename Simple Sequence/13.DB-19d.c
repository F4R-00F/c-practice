#include <stdio.h>
int main()
{
    float a,b,c,avg,total;
    (a=150), (b=175), (c=210);
    avg=(a+b+c)/3;
    total=avg*20;
    printf("total weight:%.2f gm", total);
    return 0;
}