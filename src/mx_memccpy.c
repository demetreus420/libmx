#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    char* q = dst;
    const char* p = src;
    const char* p_end = p + n;
    char ch = ~(char)c;
    
    for (;;) {
        if (p >= p_end)
            break;
        
        if (ch == c)
            return NULL;
        
        *q++ = ch = *p++;
    }

    if (p >= p_end && ch != c)
        return NULL;

    return q;
}
