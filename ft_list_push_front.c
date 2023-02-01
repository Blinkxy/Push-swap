/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:16:21 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/01 20:24:12 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_front(t_list *begin_list, void *data)
{
    t_list  *new;
    if(begin_list)
    {    
        new = ft_create_elem(data);
        new->next= being_list;
        *begin_list = new;
    }
    else
        begin_list = ft_create_elem(data);
}