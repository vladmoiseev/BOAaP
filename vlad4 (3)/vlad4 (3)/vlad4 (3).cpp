#include <stdio.h>
#include <random>
#include <stdlib.h>
#include <time.h>
void randominput(int size, int array[100][100]);
void manualinput(int size, int array[100][100]);
void check_more_0(int* value);

int main()
{
    int M[100][100]{ 0 }, size, inp = 0;
    int result = 0;
    srand(time(NULL));
    printf("enter the number of elements of the side of the square = ");
    check_more_0(&size);
    printf("print 1 for manual input or 2 for random input: ");
    while (scanf_s("%d", &inp) != 1 || getchar() != '\n' || inp > 2 || inp < 1)
    {
        printf("Wrong input\n");
        rewind(stdin);
    }
    switch (inp)
    {
    case 1:
        manualinput(size, M);
        break;
    case 2:
        randominput(size, M);
        break;
    }
    int min_elem = M[size-1][size-1], str = 0, finish, end;
    finish = 0;
    end = size-1;
    while (finish < end)
    {
        int str = end;
        for (int i = end; i >= finish; i--) 
        {
            if (M[str][i] < min_elem && M[str][i] % 2 == 0) 
            {
                min_elem = M[str][i];
            }
        }
        finish++;
        end--;
    }
    printf("the minimum even element 4 areas is %d", min_elem);
 
    for (int i = 0; i < size; i++)
    {
        printf("\n");
        for (int j = 0; j < size; j++)
            printf("%d  ",M[i][j]);
    }
    return 0;
}

void manualinput(int size, int array[100][100]) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("M[%d][%d]: ", i, j);
            while (scanf_s("%d", &array[i][j]) != 1 || getchar() != '\n')
            {
                printf("Wrong input\n");
                rewind(stdin);
            }
        }
    }
}
void randominput(int size, int array[100][100]) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            array[i][j] = -100 + rand() % (100 + 100 + 1);
            printf("M[%d][%d]: %d\n", i, j, array[i][j]);
        }
    }
}
void check_more_0(int* value) {
    while (scanf_s("%d", value) == 0 || *value < 0 || getchar() != '\n')
    {
        printf("Wrong input");
        rewind(stdin);
    }
}
