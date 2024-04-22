/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:01:58 by anmohamm          #+#    #+#             */
/*   Updated: 2024/01/22 00:28:01 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_next_min(t_list **stack)
{
	t_list	*head;
	t_list	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!has_min || head->value < min->value))
			{
				min = head;
				has_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	index_stack(t_list **stack)
{
	t_list	*head;
	int		index;

	index = 0;
	head = get_next_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_next_min(stack);
	}
}

/* have_duplicates:
*   Checks if the argument list has duplicate numbers.
*   Return: 1 if a duplicate is found, 0 if there are none.
*/
void	have_duplicates(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *stack;
	if (tmp && (tmp -> next))
	{
		while (tmp)
		{
			tmp1 = tmp -> next;
			while (tmp1)
			{
				if (tmp -> value == tmp1 -> value)
				{
					ft_free_stack(stack);
					ft_error("Error");
				}
				tmp1 = tmp1->next;
			}
			tmp = tmp -> next;
		}
	}
	index_stack(stack);
}
