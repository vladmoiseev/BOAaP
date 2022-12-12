#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

void size(int* n)
{
    printf("Enter the size of the array: ");
    while (scanf_s("%d", n) != 1 || getchar() != '\n' || * n < 0)
    {
        printf("Wrong input\nEnter the size of the array: ");
        rewind(stdin);
    }
}
int* memory(int* n)
{
    int* mas = (int*)calloc(*n, sizeof(int));
    return mas;
}

void filling_array(int* arr, int* n)
{
    srand(time(NULL));
    for (int i = 0; i < *n; i++)
    {
        arr[i] = rand() % 21 - 10;
    }
}

void print_array(int* arr, int* n)
{
    for (int i = 0; i < *n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge_sort(int* arr, int l, int r)
{
   
    if (l == r) return;
    int mid = (l + r) / 2;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid + 1, r);
    int i = l;
    int j = mid + 1;
    int* tmp = (int*)malloc(r * sizeof(int));
    for (int step = 0; step < r - l + 1; step++)
    {
        if ((j > r) || ((i <= mid) && (arr[i] < arr[j])))
        {
            tmp[step] = arr[i];
            i++;
        }
        else
        {
            tmp[step] = arr[j];
            j++;
        }
    }
    for (int step = 0; step < r - l + 1; step++)
        arr[l + step] = tmp[step];
   
}

/*void merge_sort_reverse(int* arr, int l, int r)
{
    if (l == r) return;
    int mid = (l + r) / 2;
    merge_sort_reverse(arr, l, mid);
    merge_sort_reverse(arr, mid + 1, r);
    int i = l;
    int j = mid + 1;
    int* tmp = (int*)malloc(r * sizeof(int));
    for (int step = 0; step < r - l + 1; step++)
    {
        if ((j > r) || ((i <= mid) && (arr[i] > arr[j])))
        {
            tmp[step] = arr[i];
            i++;
        }
        else
        {
            tmp[step] = arr[j];
            j++;
        }
    }
    for (int step = 0; step < r - l + 1; step++)
        arr[l + step] = tmp[step];
}*/

void bubble_sort(int* arr, int size)
{
   
    int z, no_swap = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                z = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = z;
                no_swap = 1;
            }
        }
        if (no_swap == 0)
        {
            break;
        }
    }
   
}

void negative_num(int* data, int* length)
{
    int amount = 0;
    int k = 0;
    for (int i = *(length); i >= 0; i--)
    {

        if (data[i] < 0)
        {
            for (int j = i; j < *(length)-1; j++)
            {
                int tmp = *(data + j);
                *(data + j) = *(data + j + 1);
                *(data + j + 1) = tmp;
            }
            amount++;


        }
    }
    *(length) -= amount;
}

void New_array_definition(int* nums, int* old, int* new_arr, int length)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (old[i] < 0)
        {
            nums[i] = old[i];
        }
        else
        {
            nums[i] = new_arr[count];
            count++;
        }
    }
}

void old_array(int* mas, int* old_arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        old_arr[i] = mas[i];
    }
}

void the_worst_case(int size, int** array) {
    int k = 0;
    for (int i = size; i > 0; i--) {
        (*array)[k] = i;
        k++;
    }
}