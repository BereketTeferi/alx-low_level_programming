#include "lists.h"

/**
 * print_listint_safe - prints linked list
 *
 * @head: head of linked list
 *
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	    const listint_t *tmp;
	        tmp = head;

		    while (tmp) {
			            nodes++;
				            printf("[%p] %d\n", (void *)tmp, tmp->n);
					            if (tmp->next && (void *)tmp < (void *)head) {
							                printf("-> [%p] %d\n", (void *)tmp->next, tmp->next->n);
									            exit(98);
										            }
						            tmp = tmp->next;
							        }

		        return (nodes);
}
