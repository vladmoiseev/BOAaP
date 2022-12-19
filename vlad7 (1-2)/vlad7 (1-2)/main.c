#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int first_task(void);
int second_task(void);
int main(void)
{
    int choose;
    int(*task[])(void) = { &first_task, &second_task };
    printf("Choose task \n\ninput 0 to run First Task\ninput 1 to run Second Task\n\n");
    check(&choose);
    return task[choose]();
}

int first_task(void)
{
    char* str;
    printf("input string:\n");
    str = str_get();
    int k = 0, m = 0, count = 0;
    amount_of_words(str, &count);
    printf("Enter k and m:\n");
    //scanf_s("%d", &k);
    check_more_0(&k, count);
    //scanf_s("%d", &m);
    check_more_0(&m, count);
    int len_m = lenght_of_word(str, begin_of_word(str, m));
    int len_k = lenght_of_word(str, begin_of_word(str, k));
    char* temp = (char*)malloc(str_len(str) * sizeof(char));
    str_copy(temp, str, begin_of_word(str, m));
    char* temp1 = (char*)malloc(str_len(str) * sizeof(char));
    str_copy(temp1, str, begin_of_word(str, k));
    int begin_k = begin_of_word(str, k);
    word_delete(str, begin_k, k, len_k);
    putchar('\n');
    str = str_cat(str, temp, begin_k);
    int begin_m = begin_of_word(str, m);
    word_delete(str, begin_m, m, len_m);
    str = str_cat(str, temp1, begin_m);
    printf("received string:\n");
    output(str);
}

int second_task(void)
{
    char* str;
    printf("input 1 string:\n");
    str = str_get();
    char* word;
    printf("input 2 string:\n");
    word = str_get();
    int result = find_count( word, str);
    printf("\nnumber of occurrences of 2 strings in 1 = %d", result);
}



