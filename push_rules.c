/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_rules.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:46:06 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/02 14:13:33 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_a(t_list *stack_a)
{
    t_list *swap;
    t_list *tmp;
    
    if(ft_list_size(stack_a) > 1)
    {
    swap = *stack_a->next;
    tmp = *stack_a;
    swap->next = tmp;
    *stack_a = swap;
    ft_printf("sa\n");
    }
}

void swap_b(t_list *stack_b)
{
    t_list *swap;
    t_list *tmp;
    
    if(ft_list_size(stack_b) > 1)
    {
    swap = *stack_b->next;
    tmp = *stack_b;
    swap->next = tmp;
    *stack_b = swap;
    ft_printf("sb\n");
    }
}

void ss(t_list *stack_a, t_list *stack_b)
{
    swap_a(stack_a);
    swap_b(stack_b);
    ft_printf("ss\n");
}

void push_a(t_list *stack_a, t_list *stack_b)
{
    t_list *push;
    
    if(stack_b)
        {
            push = stack_b;
            push->next = stack_a;
            stack_a = push;
            stack_b = stack_b->next;
        }
}

void push_b(t_list *stack_a, t_list *stack_b)
{
    t_list *push;
    
    if(stack_a)
        {
            push = stack_a;
            push->next = stack_b;
            stack_b = push;
            stack_a = stack_a->next;
        }
}

void rotate_a(t_list *stack_a)
{
    t_list *rotate;
    t_list *tmp;
    
    if (ft_list_size(stack_a) > 1)
        {
            tmp = stack_a;
            while(tmp->next != NULL)
                tmp = tmp->next;
            rotate = stack_a->next;
            tmp->next = stack_a;
            stack_a->next = NULL;
            stack_a = rotate;
        }
}

void rotate_b(t_list *stack_b)
{
    t_list *rotate;
    t_list *tmp;
    
    if (ft_list_size(stack_b) > 1)
        {
            tmp = stack_b;
            while(tmp->next != NULL)
                tmp = tmp->next;
            rotate = stack_b->next;
            tmp->next = stack_b;
            stack_b->next = NULL;
            stack_b = rotate;
        }
}

void rr(t_list *stack_a, t_list *stack_b)
{
    ra(stack_a);
    rb(stack_b);
}

void rra(t_list *stack_a)
{
    t_list *reverse;
    t_list *tmp;
    t_list *tmp2;

    if (ft_list_size(stack_a) > 1)
        {
            tmp = stack_a;
            while(stack-a->next != NULL)
            {
                tmp2 = stack_a;
                stack_a = stack_a->next;
            }
            reverse = stack_a;
            reverse->next = tmp;
            stack_a = reverse;
            tmp2->next = NULL;
        }
}
