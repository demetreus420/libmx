#include "libmx.h"

char* mx_strend (char* str) {
    char *p = str;
    p = p + mx_strlen(str);

    return p;
}
