#include "Header.h" 

void check_more_0(int* value) {
    while (scanf_s("%d", value) == 0 || * value < 0 || getchar() != '\n')
    {
        printf("input correct number\nenter value: ");
        rewind(stdin);
    }
}

void matrix_filling(int*** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("M[%d][%d]: ", i, j);
            while (scanf_s("%d", &(*arr)[i][j]) != 1 || getchar() != '\n')
            {
                printf("Wrong input\n");
                rewind(stdin);
            }
        }
    }
}

void print_matrix(int ns, int ms, int*** arr) {
    for (int i = 0; i < ns; i++)
    {
        for (int j = 0; j < ms; j++)
        {
            printf("%d\t", (*arr)[i][j]);
        }
        printf("\n");
    }
}

void memory_allocate(int*** arr, int ns, int ms) {
    *arr = (int**)malloc(ns * sizeof(int*));
    for (int i = 0; i < ns; i++)
    {
        (*arr)[i] = (int*)malloc(ms * sizeof(int));
    }
}

void identical_elements(int n, int row, int*** arr, int col, int* index) {
    int mmax_amount = 0, max_amount = 0, amount = 0;
    for (int i = n; i < col; i++)
    {
        max_amount = 0;
        for (int k = 0; k < row; k++)
        {
            amount = 0;
            for (int j = 0; j < row; j++) {
                if ((*arr)[j][i] == (*arr)[k][i])
                    amount++;
            }
            if (max_amount < amount) {
                max_amount = amount;
            }
        }
        if (mmax_amount < max_amount) {
            mmax_amount = max_amount;
            (*index) = i;

        }


    }
}

void sorting(int row, int col, int*** arr) {
    int index;
    for (int i = 0; i < col - 1; i++) {
        identical_elements(i, row, arr, col, &index);
        for (int j = 0; j < row; j++) {
            int temp = (*arr)[j][i];
            (*arr)[j][i] = (*arr)[j][index];
            (*arr)[j][index] = temp;
        }
    }
}

void free_memory(int rows, int*** matrixs) {
    for (int i = 0; i < rows; i++)
    {
        free(*(matrixs + i));
    }
}

