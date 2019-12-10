#include "libmx.h"

void mx_pop_back(t_list **head) {
    
    t_list *back = *head;

    if (*head == NULL || head == NULL)
        return; 

    while (back->next->next != NULL)
        back = back->next;

    free(back->next);
    back->next = NULL;
}
