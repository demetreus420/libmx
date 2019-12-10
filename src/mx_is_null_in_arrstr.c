#include "libmx.h"

bool mx_is_null_in_arrstr (char** arr) {
    for (int i = 0; i < 1000; i++)
        if (arr[i] == NULL) return true;
    
    return false;
}
