#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
	char* new = mx_strnew(mx_strlen(mx_strtrim(str)));
    int index = 0;

    str = mx_strtrim(str);

    for (int i = 0; i < mx_strlen(str); i++) {
        if (!mx_isspace(str[i])) {
            new[index] = str[i];
            index++;
        }
        else if (!mx_isspace(str[i + 1])) {
            new[index] = ' ';
            index++;
        }
    }

    return new;
}
