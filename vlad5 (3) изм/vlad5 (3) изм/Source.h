#pragma once
#include <stdio.h>
#include <stdlib.h>

void check_more_0(int* value);
void memory_allocate(int*** arr, int sizes);
void matrix_filling(int*** arr, int sizes);
void print_matrix(int sizes, int*** arr);
void print_received_matrix(int sizes, int*** matrixs, int deductibles, int ys);
void delete_elements(int sizes, int  deductibles, int*** matrixs, int ys);
