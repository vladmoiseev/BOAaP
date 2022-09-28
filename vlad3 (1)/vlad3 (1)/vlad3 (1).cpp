#include <stdio.h>
#include <random>

int main()
{
    double M[100],c, a = 1;
    int n, amount = 0;
    bool boolean = 0;
        /*for (int i = 0; i < n; i++)
        {
            M[i] = rand() % 100;
       
        }*/
    printf("input n = "); //кол.эл.масс.
    
    boolean = scanf_s("%d", &n);
    while (boolean != 1) 
    {
        printf("Pls try again\n");
        rewind(stdin);
        boolean = scanf_s("%d", &n);
    }
    printf("input c = "); //число с которым надо сравнить
   
    boolean = scanf_s("%d", &c);
    while (boolean != 1) 
    {
        printf("Pls try again\n");
        rewind(stdin);
        boolean = scanf_s("%d", &c);
    }
    printf("enter array elements\n");
    for (int i = 0; i < n; i++)
    {
       
        boolean = scanf_s("%lf", &M[i]);
        while (boolean != 1) 
        {
            printf("Pls try again\n");
            rewind(stdin);
            boolean = scanf_s("%lf", &M[i]);
        }
        printf("\n");
        if (c < M[i])
            amount++;
    }
    
        int j = 0, max = M[0];
        for (int i = 0; i < n; i++)
        {
            if (M[i] > max)
            {
                max = M[i];
                j = i;
            }
      
        }
        int y = 0, min = M[0];
        for (int i = 0; i < n; i++)
        {
            if (M[i] < min)
            {
                min = M[i];
                y = i;
            }

        }
        if (min <= 0)
            min = min * (-1);
        if (min > max)
            j = y; 

        for (int i = j+1; i < n; i++)
        {
            a *= M[i];
        }
        printf("%lf\n", a);

    
    printf("amount = %d", amount);
        return 0;
}
