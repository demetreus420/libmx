#include "libmx.h"

char *mx_strtrim(const char *str) {
	int i = 0;
	int k = mx_strlen(str) - 1;
    char *new;

    if (!str)
		return NULL;
	
	while (mx_isspace(str[i]))
		i++;
	
    while (mx_isspace(str[k]))
		k--;
	
	new = mx_strnew(k + 1 - i);
	new[0] = 'a';
	new = mx_strncpy(new, &str[i], k + 1 - i);
		
	return new;
}

// int main() {
//     char name[] = "  Hello bitch!    ";
//     printf("%s",mx_strtrim(name));
// }
