#include "Header.h"

int amount_of_words(char* str) {
    int i = 0, count = 0, amount = 0;
    while (str[i] != '\0') {
        if (if_letter(str[i]) == 1)
            count++;
        else {
            if (count % 2 == 0)
                amount++;
            count = 0;
        }
        i++;
    }
    return amount;
}
int if_letter(char str)
{
    if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
        return 1;
    else
        return 0;
}

void qs(char** mas, int size) {
    int i = 0;
    int j = size - 1;
    int mid = amount_of_words(mas[size / 2]);
    do {
        while (amount_of_words(mas[i]) < mid) {
            i++;
        }
        while (amount_of_words(mas[j]) > mid) {
            j--;
        }
        if (i <= j) {

            char* tmp = mas[i];
            mas[i] = mas[j];
            mas[j] = tmp;
            i++;
            j--;
        }
    } while (i <= j);

    if (j > 0) {
        qs(mas, j + 1);
    }
    if (i < size) {
        qs(&mas[i], size - i);
    }
}


void output(char** string, int i)
{

    for (int k = 0; k < i; k++)
        printf("%s\n", string[k]);
}
