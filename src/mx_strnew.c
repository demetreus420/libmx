#include "libmx.h"

char *mx_strnew (const int size) {
    char *new = malloc(size + 1);

    if (size < 0)
        return NULL;
    else if (!new)
        return NULL;

    for (int i = 0; i <= size; i++)
        new[i] = '\0';
    
    return new;
} 



