#include "Header.h" 

int main()
{
    int** matrix;
    int row, col;
    printf("input amount of rows: ");
    check_more_0(&row);
    printf("input amount of collnos: ");
    check_more_0(&col);
    memory_allocate(&matrix, row, col);
    matrix_filling(&matrix, row, col);
    printf("\nsourse matrix:\n");
    print_matrix(row, col, &matrix);
    printf("\nnew matrix:\n");
    sorting(row, col, &matrix);
    print_matrix(row, col, &matrix);
    free_memory( col, &matrix);

    return 0;
}