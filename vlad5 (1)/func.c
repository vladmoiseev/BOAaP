
void check_more_0(int* value) {
    while (scanf_s("%d", value) == 0 || *value < 0 || getchar() != '\n')
    {
        printf("Wrong input");
        rewind(stdin);
    }
}