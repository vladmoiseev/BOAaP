#include <stdio.h>
#include <random>
#include <stdlib.h>
#include <time.h>
void linewithlongestamount(int kols, int MAXamounts, int lines, int rows, int cols, int array[100][100]);
void printmatrix(int array[100][100], int rows, int collums);
void zero_elem_funxun(int cols, int rows, int zero_elements, int results, int array[100][100]);
void check_more_0(int* value);
void manualinput(int rows, int cols, int array[100][100]);
void randominput(int rows, int cols, int array[100][100]);

int main()
{
    int M[100][100]{ 0 }, row, col, zero_element = 0, inp = 0;
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
    zero_elem_funxun(col, row, zero_element, result, M);
    int kol = 0, MAXamount = 0, line = 0;
    linewithlongestamount(kol, MAXamount, line, row, col, M);
    printmatrix(M, row, col);
    return 0;
}

void printmatrix(int array[100][100], int rows, int collums ) {
    for (int i = 0; i < rows; i++)
    {
        printf("\n");
        for (int j = 0; j < collums; j++)
            printf("%d  ", array[i][j]);
    }
}
void linewithlongestamount(int kols, int MAXamounts, int lines, int rows, int cols, int array[100][100]) {
    kols = 0, MAXamounts = 0, lines = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            for (int k = 0; k < cols; k++)
            {
                if (array[i][j] == array[i][k])
                {
                    kols++;
                }
            }
            if (kols > MAXamounts)
            {
                MAXamounts = kols;
                lines = i;
            }
            kols = 0;
        }
    }
    printf("row with longest amount: %d", lines + 1);
}
void zero_elem_funxun(int cols, int rows, int zero_elements, int results, int array[100][100]) {
    for (int j = 0; j < cols; j++)
    {
        zero_elements = 0;
        for (int i = 0; i < rows; i++)
        {
            if (array[i][j] == 0)
                zero_elements++;
        }
        if (zero_elements > 0)
        {
            results++;
        }
    }
    printf("amount of collons with 0_elem = %d\n", results);
}
void check_more_0(int* value) {
    while (scanf_s("%d", value) == 0 || *value < 0 || getchar() != '\n')
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


