#include <stdio.h>
int main()
{
    int x,m,f,total;
    printf("Son's age:");
    scanf("%d", &x);
    m=3*x;
    f=m+5;
    total=x+m+f;
    printf("Combined ages: %d", total);
    return 0;
}
