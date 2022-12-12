#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int n = 0;
	size(&n);
	int lenght = n;
	int* arr;
	int* arr_new;
	int* arr_old;
	arr = memory(&n);
	arr_old = memory(&n);
	arr_new = memory(&n);
	filling_array(arr, &n);
	printf("\nsource array:\n\n");
	print_array(arr, &n);

	old_array(arr, arr_old, lenght);
	negative_num(arr, &n);
	clock_t start = clock();
	merge_sort(arr, 0, n);
	clock_t end = clock();
	float time = (float)(end) / CLOCKS_PER_SEC;
	printf("\nsorting works for %f \n", time);

	New_array_definition(arr_new, arr_old, arr, lenght);
	printf("\nresulting array:\n\n");
	print_array(arr_new, &lenght);

	/*the_worst_case(lenght, &arr);
	printf("source array:\n");
	//print_array(arr, &n);
	clock_t start1 = clock();
	merge_sort(arr, 0, n - 1);
	clock_t end1 = clock();
	float time1 = (float)(end1) / CLOCKS_PER_SEC;
	printf("\nsorting works for %f ", time1);

	New_array_definition(arr_new, arr_old, arr, lenght);
	printf("\nresulting array:\n");
	//print_array(arr_new, &lenght);

	the_worst_case(lenght, &arr);
	clock_t start2 = clock();
	bubble_sort(arr, n );
	clock_t end2 = clock();
	float time2 = (float)(end2) / CLOCKS_PER_SEC;
	printf("\nsorting works for %f ", time2);

	New_array_definition(arr_new, arr_old, arr, lenght);
	printf("\nresulting array:\n");
	//print_array(arr_new, &lenght);*/

	free(arr);
	free(arr_new);
	free(arr_old);
	return 0;
}
