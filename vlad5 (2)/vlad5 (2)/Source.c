#include "Source.h"

void check_more_0(int* value) {
    while (scanf_s("%d", value) == 0 || *value < 0 || getchar() != '\n')
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

void print_matrix(int ns, int ms, int ***arr) {
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

void free_memory(int rows, int ***matrixs) {
	for (int i = 0; i < rows; i++)
	{
		free(*(matrixs+i));
	}
}

void sum_find(int cols, int rows, int*** matrixs, int sums , int max_sums, int *col_nums) {
	for (int j = 0; j < cols; j++)
	{
		for (int i = 0; i < rows; i++)
		{
			sums = sums + (*matrixs)[i][j];
		}
		if (max_sums < sums)
		{
			max_sums = sums;
			*col_nums = j;
		}
		sums = 0;
	}
}

void delete_col(int rows, int* cols, int*** matrixs, int col_nums) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = col_nums; j < *cols; j++)
		{
			(*matrixs)[i][j] = (*matrixs)[i][j + 1];
		}
		(*matrixs)[i] = (int*)realloc((*matrixs)[i], ((*cols) - 1) * sizeof(int));
	}
	(*cols)--;
}