/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:16:21 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/07 17:24:55 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_list_push_front(t_list *begin_list, void *data)
{
	t_list	*new;

	if (begin_list)
	{
		new = ft_create_elem(data);
		new->next = begin_list;
		begin_list = new;
	}
	else
		begin_list = ft_create_elem(data);
}
