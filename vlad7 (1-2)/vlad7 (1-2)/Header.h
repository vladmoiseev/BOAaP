#pragma once
#include <stdio.h>
#include <stdlib.h>

void check(int* value);
char* str_get();
int str_len(char* str);
int find_count(char* string1, char* string2);
int output(char* str);
int begin_of_word(char* str, int k);
int lenght_of_word(char* str, int begin);
char* str_cat(char* string1, char* string2, int k);
void str_copy(char* string1, char* string2, int begin);
void word_delete(char* str, int begin, int k, int lenght);
void amount_of_words(char* str, int *count);
void check_more_0(int* value, int count);