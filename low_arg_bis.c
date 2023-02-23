/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_arg_bis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:47:08 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/23 21:09:40 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    list_4(t_list **stack_a, t_list **stack_b)
{
    while(*stack_a)
    {
        if((*stack_a)->position == 1)
            push_b(stack_a, stack_b);
        else if((*stack_a)->next->position == 1)
        {
            rotate_a(stack_a);
            push_b(stack_a, stack_b);
        }
        else if((*stack_a)->next->next->position == 1)
        {
            rra(stack_a);
            rra(stack_a);
            push_b(stack_a, stack_b);
        }
        else if((*stack_a)->next->next->next->position == 1)
        {
            rra(stack_a);
            push_b(stack_a, stack_b);
        }
        break;
    }
    list_3(stack_a);
    push_a(stack_a, stack_b);
}


void    list_5_bis(t_list **stack_a, t_list **stack_b)
{
        if((*stack_a)->position == 1)
            push_b(stack_a, stack_b);
        else if((*stack_a)->next->position == 1)
        {
            rotate_a(stack_a);
            push_b(stack_a, stack_b);
        }
        else if((*stack_a)->next->next->position == 1)
        {
            rotate_a(stack_a);
            rotate_a(stack_a);
            push_b(stack_a, stack_b);
        }
        else if((*stack_a)->next->next->next->position == 1)
        {
            rra(stack_a);
            rra(stack_a);
            push_b(stack_a, stack_b);
        }
        else if((*stack_a)->next->next->next->next->position == 1)
        {
            rra(stack_a);
            push_b(stack_a, stack_b);
        }
}