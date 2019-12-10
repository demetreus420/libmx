#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    int *p = b;

	for ( ; len > 0; p++) {
        len--;
        *p = c;
    }
    
	return b;
}

// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     int *p_a = arr;
//     p_a = mx_memset(arr, 7, 6);
//     for(int i = 0; i < 6; i++)
//         mx_printint(arr[i]);
// }
