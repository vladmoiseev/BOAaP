#include <time.h>
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
void size(int* n);
int* memory(int* n);
void filling_array(int* arr, int* n);
void merge_sort(int* arr, int l, int r);
//void merge_sort_reverse(int* arr, int l, int r);
void bubble_sort(int* arr, int size);
void negative_num(int* data, int* length);
void New_array_definition(int* nums, int* old, int* new_arr, int length);
void old_array(int* mas, int* new_arr, int length);
void print_array(int* arr, int* n);
void the_worst_case(int size, int** array);
#endif