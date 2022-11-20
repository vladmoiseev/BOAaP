//#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Source.h"

int main()
{
	int** matrix;
	int row, col, sum = 0, max_sum = 0, col_num = 0;
	printf("input amount of rows: ");
	check_more_0(&row);
	printf("input amount of collnos: ");
	check_more_0(&col);
	memory_allocate(&matrix, row, col);
	matrix_filling( &matrix, row, col);
	printf("\nsourse matrix:\n");
	print_matrix( row, col, &matrix);
	sum_find(col, row, &matrix, sum, max_sum, &col_num);
	printf("\ncollum with bigest sum: %d\n\n",col_num);
	printf("matrix witout collumn with bigest sum: \n");
	delete_col(row, &col, &matrix, col_num);
	print_matrix(row, col, &matrix);
	free_memory(row, matrix);
	printf("\n");
	rewind(stdin);
	getchar();
	return 0;
}