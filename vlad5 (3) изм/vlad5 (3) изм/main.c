#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Source.h"

int main()
{
	int** matrix;
	int size;
	printf("enter the size of the side of the matrix: ");
	check_more_0(&size);
	memory_allocate(&matrix, size);
	matrix_filling(&matrix, size);
	printf("\nsourse matrix:\n");
	print_matrix(size, &matrix);
	int y = size, deductible = 0;
	delete_elements(size, deductible, &matrix, y);
	printf("\nreceived matrix:\n");
	print_received_matrix(size, &matrix, deductible, y);
	printf("\n");
	rewind(stdin);
	getchar();
	return 0;
}