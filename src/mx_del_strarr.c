#include "libmx.h"

void mx_del_strarr(char ***arr) {
    if (arr == NULL || *arr == NULL) {
        return;
    }
    else {
        char ***p_arr = arr;
        char **p_p = *arr;

        while (**p_arr != NULL) {
            mx_strdel(*p_arr);
            (*p_arr)++;
        }
    
        free(p_p);
        *arr = NULL;
    }
}
