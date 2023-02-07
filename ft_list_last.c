/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:30:08 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/07 17:24:08 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list->next)
		begin_list = begin_list->next;
		return (begin_list);
}
