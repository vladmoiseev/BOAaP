#include "Header.h"

void check(int* value) { 
    while (scanf_s("%d", value) == 0 || *value < 0 || *value > 1 || getchar() != '\n') {
        printf("try again\n");
        rewind(stdin);
    }
}

char* str_get()
{
    char* str;
    char temp;
    int i = 0;
    str = (char*)malloc(1 * sizeof(char));
    while ((temp = getchar()) != '\n' && temp != EOF)
    {
        str = (char*)realloc(str, (i + 2) * sizeof(char));
        str[i] = temp;
        i++;
    }
    str[i] = '\0';
    return str;
}

int str_len(char* str)
{
    int i = 0, n;
    while (str[i] != '\0')
    {
        i++;
    }
    n = i;
    return n;
}

int find_count(char* string1, char* string2)
{
    int n1 = str_len(string1);
    int n2 = str_len(string2);
    int count = 0;
    for (int i = 0; i <= n2 - n1; i++)
    {
        int match = 1;
        for (int j = 0; j < n1; j++)
        {
            if (string1[j] != string2[i + j])
            {
                match = 0;
                break;
            }
        }
        if (match == 1)
        {
            count++;
        }
    }
    return count;
}

int output(char* str)
{
    printf("\n");
    int n = str_len(str), i;
    for (i = 0; i < n; i++)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}

int if_letter(char str)
{
    if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z')) return 1;
    else return 0;
}

int begin_of_word(char* str, int k)
{
    int i = 0, n = str_len(str), cnt = 0;
    while (str[i] != '\0')
    {
        if ((i == 0 && if_letter(str[i]) == 1) || (if_letter(str[i - 1]) == 0 && if_letter(str[i]) == 1))
            cnt++;
        if (cnt == k)
            return i;
        i++;
    }
}

int lenght_of_word(char* str, int begin)
{
    int i = begin;
    int length = 0;
    while (str[i] != '\0' && if_letter(str[i]) != 0)
    {
        length++;
        i++;
    }
    return length;
}

char* str_cat(char* string1, char* string2, int k)
{
    char* s;
    int i, len1 = str_len(string1), len2 = str_len(string2);
    if (k > len1)
        k = len1;
    if ((s = (char*)malloc(sizeof(char) * (len1 + len2))) == NULL)
        return string1;
    for (i = 0; i < k; i++)
        *(s + i) = *(string1 + i);
    for (i = 0; *(string2 + i) != '\0'; i++)
        *(s + k + i) = *(string2 + i);
    for (i = 0; *(string1 + k + i) != '\0'; i++)
        *(s + k + len2 + i) = *(string1 + k + i);
    *(s + k + len2 + i) = '\0';
    string1 = s;
    return string1;
}

void str_copy(char* string1, char* string2, int begin)
{
    int end = begin + lenght_of_word(string2, begin);
    int i = begin;
    int j = 0;
    while (i != end && string2[i] != '\0')
    {
        string1[j] = string2[i];
        i++;
        j++;
    }
    string1[j] = '\0';
}

void word_delete(char* str, int begin, int k, int lenght)
{
    int i = 0;
    int size = str_len(str);
    for (i = 0; i < lenght; i++)
    {
        for (int z = begin; z < size; z++)
        {
            char tmp = str[z];
            str[z] = str[z + 1];
            str[z + 1] = tmp;
        }
    }
}

void amount_of_words(char* str, int *count) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i + 1] == ' ' || str[i + 1] == '\0')
        (*count)++;
        i++;
    }
}

void check_more_0(int* value, int count) {
    while (scanf_s("%d", &(*value)) == 0 || (*value) <= 0 || getchar() != '\n' || (*value) > count)
    {
        printf("input correct number\nenter value: ");
        rewind(stdin);
    }
}




