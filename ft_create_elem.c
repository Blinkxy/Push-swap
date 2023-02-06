/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:21:08 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/02 17:51:56 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*new;

	new = NULL;
	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	else if (new)
	{
		new->data = data;
		new->next = NULL;
	}
	return (new);
}

void	rrr(t_str *stack_a, t_str *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
