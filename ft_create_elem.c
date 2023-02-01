/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:21:08 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/01 15:41:47 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list  *ft_create_elem(void *data)
{
    t_list *new;
    new = NULL;
    new = malloc(sizeof(t_list));
    if(!new)
        return(0);
    else if(new)
    {
        new->data = data;
        new->next = NULL;
    }
    return(new);
    }
    