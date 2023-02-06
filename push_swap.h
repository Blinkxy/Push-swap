/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:46:25 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/02 17:33:33 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_node
{
	int			arg;
	int			index;
	struct node	*next;
}				t_list;

t_list			*ft_create_elem(void *data);
void			ft_list_push_front(t_list *begin_list, void *data);
int				ft_list_size(t_list *begin_list);
void			ft_list_push_back(t_list *begin_list, void *data);
t_list			*ft_list_push_strs(int size, char **strs);
void			ft_list_foreach(t_list *begin_list, void (*f)(void *));
void			rrr(t_list *stack_a, t_list *stack_b);
void			rrb(t_list *stack_b);
void			rra(t_list *stack_a);
void			rr(t_list *stack_a, t_list *stack_b);
void			rotate_b(t_list *stack_b);
void			rotate_a(t_list *stack_a);
void			push_b(t_list *stack_a, t_list *stack_b);
void			push_a(t_list *stack_a, t_list *stack_b);
void			ss(t_list *stack_a, t_list *stack_b);
void			swap_b(t_list *stack_b);
void			swap_a(t_list *stack_a);
#endif