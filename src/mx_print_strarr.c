#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    if (!mx_is_null_in_arrstr(arr))
        return; 

    if (delim && *arr && arr) {
        for (int i = 0 ; arr[i] != NULL; i++) {
            if (arr[i + 1] == NULL) {
                mx_printstr(arr[i]);
                break;
            }
            
            mx_printstr(arr[i]);
            mx_printstr(delim);
        }
    
        mx_printstr("\n");
    }
}

// int main () {
//     char* arr[] = {"iVWIq8a8", "6XVA5m0aJi0SGgcJqHWea", NULL};
//     mx_print_strarr(arr, " ");
// }
