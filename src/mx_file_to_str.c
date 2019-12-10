#include "libmx.h"

char *mx_file_to_str(const char *file) {
    char buf[509];
    char *res;
    char *tmp;
    int k;
    int fd = open(file, O_RDONLY);

    if (fd < 0)
        return NULL;

    while ((k = read(fd, buf, sizeof (buf) - 1)) > 0) {
        buf[k] = '\0';
        tmp = res;
        res = mx_strjoin(res, buf);
        free(tmp);
    }
    
    close(fd);
    return res;
}
