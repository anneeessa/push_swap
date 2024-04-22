/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:01:18 by anmohamm          #+#    #+#             */
/*   Updated: 2024/01/21 16:27:21 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//returns the size of the list
int	ft_lstsize(t_list *head)
{
	size_t	i;
	t_list	*tmp;

	tmp = head;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	ft_error(char *msg)
{
	ft_putendl_fd(msg, 2);
	exit(1);
}

t_list	*ft_check_args(int ac, char **av, t_list *stack_a)
{
	int			i;
	int			j;
	char		**strs;

	i = 1;
	while (i < ac)
	{
		strs = ft_split(av[i], ' ');
		if (!strs || strs[0] == NULL)
			code_end(strs, stack_a);
		if (strs)
		{
			j = 0;
			check_error(strs, stack_a);
			while (strs[j])
			{
				initstack(&stack_a, strs[j]);
				j++;
			}
			ft_free(strs);
		}
		i++;
	}
	have_duplicates(&stack_a);
	return (stack_a);
}

int	get_distance(t_list **stack, int index)
{
	t_list	*head;
	int		distance;

	distance = 0;
	head = *stack;
	while (head)
	{
		if (head->index == index)
			break ;
		distance++;
		head = head->next;
	}
	return (distance);
}
