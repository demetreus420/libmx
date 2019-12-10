#include "libmx.h"

static void rep1(const char *str,const char *replace, int* count, size_t* sub_len);

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    char *res;
    int i = 0;
    int count = 0;
    size_t rep_len = mx_strlen(replace);
    size_t sub_len = mx_strlen(sub);

    if (!str || !sub || !replace)
        return NULL;

    rep1(str, replace, &count, &sub_len);

    res = malloc(i + count * (rep_len - sub_len));
    
    if (!res)
        return NULL;

    i = 0;

    while (*str) {
        if (mx_strstr(str, sub) == str) {
            mx_strcpy(&res[i], replace);
            i += rep_len;
            str += sub_len;
        }
        else
            res[i++] = *str++;
    }

    res[i] = '\0';
    return res;
}

static void rep1(const char *str,const char *replace, int* count, size_t* sub_len) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (mx_strstr(&str[i], replace) == &str[i]) {
            (*count)++;
            i += *sub_len - 1;
        }
    }
}
