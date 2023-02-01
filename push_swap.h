/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:46:25 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/01 20:23:59 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct node
{
    int arg;
    int index;
    struct node *next;
}              node;

t_list  *ft_create_elem(void *data);
void    ft_list_push_front(t_list *begin_list, void *data);
int     ft_list_size(t_list *begin_list);
void    ft_list_push_back(t_list *begin_list, void *data);
t_list  *ft_list_push_strs(int size, char **strs);
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
# endif