#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node *tortoise = head, *hare = head;

    while (tortoise != NULL && tortoise->next != NULL) {
        tortoise = tortoise->next->next;
        hare = hare->next;
        if (hare == tortoise) 
            return 1;
    }
    return 0;
}
