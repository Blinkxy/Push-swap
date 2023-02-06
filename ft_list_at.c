/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:30:18 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/02 17:51:59 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*tmp;
	unsigned int	i;

	if (begin_list == NULL)
		return (0);
	tmp = begin_list;
	i = 0;
	while (i < nbr && tmp)
	{
		tmp = tmp->next;
		i++;
	}
	if (i < nbr)
		return (0);
	else if (i == nbr)
		return (tmp);
	return (0);
}
