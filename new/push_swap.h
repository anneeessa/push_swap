/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:02:34 by anmohamm          #+#    #+#             */
/*   Updated: 2024/01/21 16:30:47 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}	t_list;

//main
void	free_stack(t_list **stack);
int		is_sorted(t_list **stack);
void	sort_stack(t_list **stack_a, t_list **stack_b);
void	initstack(t_list **stack, char *argv);
//arg_check
void	ft_error(char *msg);
void	ft_free(char **str);
void	ft_free_stack(t_list **stack);
int		ft_contains(int num, char **argv, int i);
int		ft_isnum(char *num);
t_list	*ft_check_args(int ac, char **av, t_list *stack_a);
int		get_distance(t_list **stack, int index);
// check_error
void	check_error(char **args, t_list *stack_a);
//node
t_list	*ft_lstnew(int value);
void	ft_lstadd_front(t_list **stack, t_list *new);
t_list	*ft_lstlast(t_list *head);
void	ft_lstadd_back(t_list **stack, t_list *new);
int		ft_lstsize(t_list *head);
//push
int		push(t_list **stack_to, t_list **stack_from);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_a, t_list **stack_b);
//swap
int		swap(t_list **stack);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
//radix
int		get_max_bits(t_list **stack);
void	radix_sort(t_list **stack_a, t_list **stack_b);
//reverse_rotate
int		reverserotate(t_list **stack);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);
//rotate
int		rotate(t_list **stack);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);
//sort_345
void	sort_3(t_list **stack_a);
void	sort_4(t_list **stack_a, t_list **stack_b);
void	sort_5(t_list **stack_a, t_list **stack_b);
void	simple_sort(t_list **stack_a, t_list **stack_b);
int		get_min(t_list **stack, int val);
//index
t_list	*get_next_min(t_list **stack);
void	index_stack(t_list **stack);
void	have_duplicates(t_list **stack);

void	code_end(char **strs, t_list *stack_a);

#endif
