/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:05:17 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/01 20:23:47 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_back(t_list *begin_list, void *data)
{
    t_list *back;
    t_list *temp;
    
    temp = begin_list;
    back = ft_create_elem(data);
    while(begin_list)
        begin_list = begin_list->next;
    begin_list->next = back;
    begin_list = temp;
}
    