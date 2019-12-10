#include "libmx.h"

int mx_list_size(t_list *list) {
    t_list* p = list;
    int i = 0;

    while (p != NULL) {
        i++;
        p = p->next;
    }

    return i;
}
