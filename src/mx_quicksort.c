#include "libmx.h"

static int swap(char **s1, char **s2) {
    char *tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;

    return 1;
}

static void quickswap(char** arr, int* l, int* r, int* count) {
    if (*l <= *r) {
        if (mx_strlen(arr[*l]) != mx_strlen(arr[*r])) {
            swap(&arr[*l], &arr[*r]);
            (*count)++;
        }

        (*l)++;
        (*r)--;
    }
}

int mx_quicksort(char **arr, int left, int right) {
    int count = 0;
    int l = left;
    int r = right;
    int piv = mx_strlen(arr[(l + r) / 2]);

    while (l < r) {
        while (mx_strlen(arr[l]) < piv)
            l++;
        
        while (mx_strlen(arr[r]) > piv)
            r--;
        
        quickswap(arr, &l, &r, &count);
    }

    if (left < r) 
        count += mx_quicksort(arr, left, r);
    else if (l < right)
        count += mx_quicksort(arr, l, right);
    
    return count;
}
