#include "Header.h"

int main(int argc, char** argv)
{
    int size = argc - 1;
    char** str = (char**)calloc(argc - 1, sizeof(char*));
    for (int i = 1; i < argc; i++)
        str[i - 1] = argv[i];
    qs(str, size);
    output(str, size);
    return 0;
}