#include <stdio.h>
#include <random>

int main()
{
    double M[100],c, a = 1;
    int n, amount = 0, inp = 0;
    bool boolean = 0;
  
    printf("input n = "); //кол.эл.масс.
    
    boolean = scanf_s("%d", &n);
    while (boolean != 1 || n <= 0) 
    {
        printf("Pls try again\n");
        rewind(stdin);
        boolean = scanf_s("%d", &n);
    }
    printf("input c = "); //число с которым надо сравнить
   
    boolean = scanf_s("%lf", &c);
    while (boolean != 1 || c <= 0)
    {
        printf("Pls try again\n");
        rewind(stdin);
        boolean = scanf_s("%lf", &c);
    }

    printf("manual input - enter 1 \n"); //выбор ввода 
    printf("random input - enter 2 \n");
    
    boolean = scanf_s("%d", &inp);
    while (boolean != 1 || inp <= 0 || inp > 2)
    {
        printf("Pls try again\n");
        rewind(stdin);
        boolean = scanf_s("%d", &inp);
    }
    switch (inp)
    {
    case 1:

        printf("enter array elements\n");
        for (int i = 0; i < n; i++)
        {

            boolean = scanf_s("%lf", &M[i]);
            while (boolean != 1 || M[i] <= 0)
            {
                printf("Pls try again\n");
                rewind(stdin);
                boolean = scanf_s("%lf", &M[i]);
            }
            printf("\n");
            if (c <= M[i])
                amount++;
        }
        break;

    case 2:
        for (int i = 0; i < n; i++)
        {
            M[i] = rand() % 100;
            printf("%lf\n", M[i]);
            if (c <= M[i])
                amount++;
        }
   
        break;
    
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
        printf("multiplication = %lf\n", a);

    
    printf("amount = %d", amount);
        return 0;
}
