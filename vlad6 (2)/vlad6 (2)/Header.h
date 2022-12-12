#pragma once
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

void check_more_0(int* value);
void matrix_filling(int*** arr, int rows, int cols);
void print_matrix(int ns, int ms, int*** arr);
void memory_allocate(int*** arr, int ns, int ms);
void sorting(int row, int col, int*** arr);
void free_memory(int rows, int*** matrixs);
