#include <stdio.h>
#include <random>
#include <stdlib.h>
#include <time.h>
void manualinput(int rows, int cols, int array[100][100]);
void randominput(int rows, int cols, int array[100][100]);
void check_more_0(int* value);
void decrease(int rows, int cols, int array[100][100], int b);

int main()
{
    int M[100][100]{ 0 }, row, col, zero_element = 0, inp = 0, a = 0;
    int result = 0;
    srand(time(NULL));
    printf("input amount of rows = ");
    check_more_0(&row);
    printf("input amount of collons = ");
    check_more_0(&col);
    printf("print 1 for manual input or 2 for random input: ");
    while (scanf_s("%d", &inp) != 1 || getchar() != '\n' || inp > 2 || inp < 1)
    {
        printf("Wrong input\n");
        rewind(stdin);
    }
    switch (inp)
    {
    case 1:
        manualinput(row, col, M);
        break;
    case 2:
        randominput(row, col, M);
        break;
    }
    decrease(row, col, M, a);
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
            printf("%d  ",M[i][j]);
    }
	return 0;
}

void check_more_0(int* value) {
    while (scanf_s("%d", value) == 0 || *value <= 0 || getchar() != '\n')
    {
        printf("Wrong input");
        rewind(stdin);
    }
}
void manualinput(int rows, int cols, int array[100][100]) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
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
void randominput(int rows, int cols, int array[100][100]) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = -100 + rand() % (100 + 100 + 1);
            printf("M[%d][%d]: %d\n", i, j, array[i][j]);
        }
    }
}
void decrease(int rows, int cols, int array[100][100], int b) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (array[i][j] == 0)
            {
                b = array[i][0];
                break;
            }
        }
        if (b > 0) break;
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = array[i][j] - b;
        }
    }
}