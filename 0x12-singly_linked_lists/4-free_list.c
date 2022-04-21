#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *free_list-creat free list
 *@head:list
 *Return:freelist
 */
void free_list(list_t *head)
{
list_t *new;

while (head)
{
new = head->next;
free(head->str);
free(head);
head = new;
}
}
