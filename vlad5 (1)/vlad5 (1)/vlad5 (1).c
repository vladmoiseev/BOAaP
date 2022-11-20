#include <malloc.h>
#include "Source.h"

int main()
{
    int elements;
    printf("how many element u would like to see: ");
    check_more_0(&elements);
    int* array = (int*)malloc(elements * sizeof(int));
    array_filling(&array,elements);
    printf("source array: ");
    print_array(elements,&array);
    delete_elements(&elements,&array);
    printf("\nresulting array: ");
    print_array(elements,&array);
    rewind(stdin);
    getchar();
    free(array);
    return 0;
}