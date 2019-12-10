#include "libmx.h"

int mx_sqrt(int x) {
    int start = 1;
    int end = x <= 46340 ? x : 46340;

    if (x == 0 || x == 1)
       return x;

    while (start <= end) {
        int mid = end + (start - end) / 2;

        if (mx_compare(mid, x) == 0)
            return mid;

        if (mx_compare(mid, x) < 0)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return 0;
}
