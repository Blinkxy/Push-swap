/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_rules_bis.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:38:14 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/02 14:39:01 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list *stack_a)
{
	t_list	*rotate;
	t_list	*tmp;

	if (ft_list_size(stack_a) > 1)
	{
		tmp = stack_a;
		while (tmp->next != NULL)
			tmp = tmp->next;
		rotate = stack_a->next;
		tmp->next = stack_a;
		stack_a->next = NULL;
		stack_a = rotate;
	}
}

void	rotate_b(t_list *stack_b)
{
	t_list	*rotate;
	t_list	*tmp;

	if (ft_list_size(stack_b) > 1)
	{
		tmp = stack_b;
		while (tmp->next != NULL)
			tmp = tmp->next;
		rotate = stack_b->next;
		tmp->next = stack_b;
		stack_b->next = NULL;
		stack_b = rotate;
	}
}

void	rr(t_list *stack_a, t_list *stack_b)
{
	ra(stack_a);
	rb(stack_b);
}

void	rra(t_list *stack_a)
{
	t_list	*head;
	t_list	*tail;

	if (ft_list_size(stack_a) > 1)
	{
		head = stack_a;
		while (stack - a->next != NULL)
		{
			tail = stack_a;
			stack_a = stack_a->next;
		}
		stack_a->next = head;
		tail->next = NULL;
	}
}

void	rrb(t_list *stack_b)
{
	t_list	*head;
	t_list	*tail;

	if (ft_list_size(stack_b) > 1)
	{
		head = stack_b;
		while (stack - a->next != NULL)
		{
			tail = stack_b;
			stack_b = stack_b->next;
		}
		stack_b->next = head;
		tail->next = NULL;
	}
}
