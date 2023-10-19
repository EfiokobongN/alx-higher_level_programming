#include "lists.h"

/**
 * check_cycle - Funct linked list has a cycle
 * @list: The linked checked for cycles
 *
 * Return: 1 if contains a cycle else 0 if nothing
 */

int check_cycle(listint_t *list)
{
        listint_t *slow = list;
        listint_t *fast = list;

        if (!list)
                return (0);

        while (slow && fast && fast->next)
        {
                slow = slow->next;
                fast = fast->next->next;
                if (slow == fast)
                        return (1);
        }

        return (0);
}
