#include "libmx.h"

bool mx_isspace(char c) {
    bool bl;
    char b[6] = {'\t', '\n', '\v', '\f', '\r', ' '};

    for (int i = 0; i <= 5; i++) {
        if (c == b[i])
            bl = true;
        else
            bl = false;

        if (bl)
            break;
    }

    return bl;
}
