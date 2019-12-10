#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    if (size <= 0) return NULL;

    void *buff = malloc(size);
    
    if (buff)
        mx_memcpy(buff, ptr, size); 


    free(ptr);
    ptr = buff;

    return ptr;
}
