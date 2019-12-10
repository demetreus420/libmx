#include "libmx.h"

void mx_swap_char (char *s1, char *s2) {
    char *sub = malloc(sizeof(char));
    *sub = *s1;
    *s1 = *s2;
    *s2 = *sub;
    free(sub);
}
