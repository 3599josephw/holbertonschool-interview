#include "lists.h"

/**
 * is_palindrome - checks if palindrome
 * Return: 1 if palindrome else 0
 */
int is_palindrome(listint_t **head)
{
	listint_t **first = head, *tmp = *first, *last = *first;

	if (!(*head))
	{
		return (1);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	while ((*first) != tmp)
	{
		tmp = *first;
		while (tmp->next != last)
		{
			tmp = tmp->next;
		}
		if ((*first)->n != last->n)
		{
			return (0);
		}
		last = tmp;
		*first = (*first)->next;
	}

	return (1);
}
