#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start, *base;

	start = base = head;
	while (start && base && base->next)
	{
		start = start->next;
		base = base->next->next;
		if (start == base)
		{
			start = head;
			break;
		}
	}
	if (!start || !base || !base->next)
		return (NULL);
	while (start != base)
	{
		start = start->next;
		base = base->next;
	}
	return (base);
}
