#include <stdio.h>
#include <stdlib.h>

void check_more_0(int* value);
void matrix_filling(int*** arr, int ns, int ms);
void print_matrix(int ns, int ms, int*** arr);
void memory_allocate(int*** arr, int ns, int ms);
void delete_col(int rows, int *cols, int*** matrixs, int col_nums);
void free_memory(int rows, int*** matrixs);
void sum_find(int cols, int rows, int*** matrixs, int sums, int max_sums, int *col_nums);