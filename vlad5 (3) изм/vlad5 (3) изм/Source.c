#include "Source.h"

void check_more_0(int* value) {
	while (scanf_s("%d", value) == 0 || *value < 0 || getchar() != '\n')
	{
		printf("input correct number\nenter value: ");
		rewind(stdin);
	}
}

void memory_allocate(int*** arr, int sizes) {
	*arr = (int**)malloc(sizes * sizeof(int*));
	for (int i = 0; i < sizes; i++)
	{
		(*arr)[i] = (int*)malloc(sizes * sizeof(int));
	}
}

void matrix_filling(int*** arr, int sizes) {
	for (int i = 0; i < sizes; i++)
	{
		for (int j = 0; j < sizes; j++)
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

void print_matrix(int sizes, int*** arr) {
	for (int i = 0; i < sizes; i++)
	{
		for (int j = 0; j < sizes; j++)
		{
			printf("%d\t", (*arr)[i][j]);
		}
		printf("\n");
	}
}

void print_received_matrix(int sizes, int*** matrixs, int deductibles, int ys) {
	for (int i = 0; i < sizes; i++)
	{
		ys = sizes - deductibles;
		for (int j = 0; j < ys; j++)
		{
			printf("%d\t", (*matrixs)[i][j]);
		}
		deductibles++;

		printf("\n");
	}
}

void delete_elements(int sizes, int  deductibles, int*** matrixs, int ys) {
	for (int i = 0; i < sizes; i++)
	{
		ys = sizes - deductibles;
		(*matrixs)[i] = (int*)realloc((*matrixs)[i], sizes * sizeof(int));
		deductibles++;
	}
	deductibles = 0;
}
