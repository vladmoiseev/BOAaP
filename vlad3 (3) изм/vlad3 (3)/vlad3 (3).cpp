#include <stdio.h>
#include <random>

int main()
{
    int array[100], kol = 0, inp = 0;
    bool boolean = 0;
    printf("input kol = ");
    boolean = scanf_s("%d", &kol);
    while (boolean != 1 || kol <= 0) 
    {
        printf("Pls try again\n");
        rewind(stdin);
        boolean = scanf_s("%d", &kol);
    }
    printf("manual input - enter 1 \n");
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
        for (int i = 0; i < kol; i++)
        {
            printf("input array element = ");

            boolean = scanf_s("%d", &array[i]);
            while (boolean != 1 || array[i] <= 0)
            {
                printf("Pls try again\n");
                rewind(stdin);
                boolean = scanf_s("%d", &array[i]);
            }
            printf("\n");
        }
        break;
    case 2:
        for (int i = 0; i < kol; i++)
        {
            array[i] = rand() % 100;
            printf("%d\n", array[i]);

        }

    }
    int i, j, temp, elem, amount, MAXamount = 0, MAXelem;
    for (i = 0; i < kol; i++)
    {
        for (j = kol - 1; j > i; j--)
        {
            if (array[j - 1] > array[j]) 
            {
                temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
            }
        }
    }
    elem = array[0];
    amount = 0;
    for (i = 0; i < kol; i++)
    {
        if (elem == array[i])
            amount++;
        else 
        {
            amount = 1;
            elem = array[i];
        }
        if (MAXamount < amount) 
        {
            MAXamount = amount;
            MAXelem = elem;

        }
    }
    printf("%d", MAXelem);
    return 0;
}