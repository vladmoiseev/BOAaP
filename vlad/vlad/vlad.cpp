#include<stdio.h>
int main()
{
    float c, r, s, pi = 3.14;
    
    printf("input r= ");
    scanf_s("%f", &r);

    c = 2 * pi * r;
    s = pi * r * r;

    printf("c = %.2f \n", c);
    printf("s = %.2f", s);
    return 0;




}