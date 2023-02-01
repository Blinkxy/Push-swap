/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:55:12 by mzoheir           #+#    #+#             */
/*   Updated: 2023/01/16 16:25:58 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    int i;
    
    i = 0;
    if(begin_list)
    {
        while(begin_list)
        {
            begin_list = begin_list->next;
            i++;
        }
    }
    return(i);
}