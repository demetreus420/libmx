#include "libmx.h"

int mx_strcmp(const char *s1, const char *s2) {
    int i = 0;

    if (!s1 && !s2)
        return 0;
    else if (!s1)
        return -1;
    if (!s2)
        return 1;

    while (s1[i] == s2[i]) {
        if (s1[i] == '\0')
            return 0;
        
        i++;
    }

    return s1[i] - s2[i];
}
