/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:43:09 by mzoheir           #+#    #+#             */
/*   Updated: 2023/01/30 17:00:59 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
    t_list *prev;
    t_list *tmp;
    
    prev = begin_list;
    
    while (prev != NULL)
    {
        tmp = prev->next;
        free_fct(prev->data);
        free(prev);
        prev = tmp;
    }
    begin_list = NULL;
}