#include <stdio.h>
int main()
{
    float x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0, g1, g2, g3;
    printf("input x1 = ");
    scanf_s("%f", &x1);
    printf("input y1 = ");
    scanf_s("%f", &y1);
    printf("input x2 = ");
    scanf_s("%f", &x2);
    printf("input y2 = ");
    scanf_s("%f", &y2);
    printf("input x3 = ");
    scanf_s("%f", &x3);
    printf("input y3 = ");
    scanf_s("%f", &y3);

    g1 = x1 * x1 + y1 * y1;
    g2 = x2 * x2 + y2 * y2;
    g3 = x3 * x3 + y3 * y3;
     
    if (g1 <= g2 && g1 <= g3)
    
        printf("dot x1y1 the closest one");
   
    else if (g2 <= g1 && g2 <= g3)
    
        printf("dot x2y2 the closest one");
      
    else if (g3 <= g1 && g3 <= g2)
    
        printf("dot x3y3 the closest one");
    
    return 0;
}