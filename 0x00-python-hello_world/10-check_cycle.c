#include "lists.h"

/**
 * check_cycle - function checks if a singly linked list has a cycle in it.
 * @list: pointer to the beginning of the node
 * Return: 0 if no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *cur, *chek;

	if (list == NULL || list->next == NULL)
		return (0);
	cur = list;
	chek = cur->next;

	while (cur != NULL && chek->next != NULL
		&& chek->next->next != NULL)
	{
		if (cur == chek)
			return (1);
		cur = cur->next;
		chek = chek->next->next;
	}
	return (0);
}
