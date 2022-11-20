#include "Source.h"

void check_more_0(int* value) {
    while (scanf_s("%d", value) == 0 || *value <= 0 || getchar() != '\n')
    {
        printf("input correct number\nenter value: ");
        rewind(stdin);
    }
}

void print_array(int ns, int **arr) {
    for (int i = 0; i < ns; i++)
        printf("%d ", (* arr)[i]);
}

void delete_elements(int *ns, int **arr) {
    for (int i = 0; i < *ns; i++)
    {
        if ((*arr)[i] > 9 && (*arr)[i] < 100)
        {
            for (int j = i; j < *ns; j++)
            {
                (*arr)[j] = (*arr)[j + 1];
            }
            (*ns)--;
            i--;
            *arr = (int*)realloc(*arr, (*ns) * sizeof(int));
        }
    }
}

void array_filling(int** arr, int ns) {
 
    for (int i = 0; i < ns; i++)
    {
        printf("%d element = ", i);
        check_more_0(&(*arr)[i]);
    }
}

