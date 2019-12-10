#include "libmx.h"

void mx_str_reverse(char *s) {
    int i = 0;
    int j = mx_strlen(s);
    j--;

    while (i < j) {
        mx_swap_char(&s[i],&s[j]);
        i++;
        j--;
    }
}
