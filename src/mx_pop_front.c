#include "libmx.h"

void mx_pop_front(t_list **head) {
    t_list *del = (*head);
    
    if (!head || !(*head))
        return;

    if (head != NULL) {
        *head = (*head)->next;
        free(del);
    }
}
