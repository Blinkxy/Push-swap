/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:40:58 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/02 17:52:32 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*suiv;

	prev = NULL;
	suiv = NULL;
	while (*begin_list != NULL)
	{
		suiv = *begin_list->next;
		*begin_list->next = prev;
		prev = *begin_list;
		*begin_list = next;
	}
	*begin_list = prev;
	return (*begin_list);
}
