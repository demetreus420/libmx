#include "libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
	mx_strcpy(mx_strend(s1), s2);
	
	return s1;
}

