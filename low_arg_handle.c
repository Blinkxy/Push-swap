/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_arg_handle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:04:26 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/23 00:57:09 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    list_2(t_list **stack_a)
{
    if((*stack_a)->data > (*stack_a)->next->data)
        swap_a(stack_a);
}

void    list_3(t_list **stack_a)
{
    t_list *tmp;
    
    if((*stack_a)->data > (*stack_a)->next->data && (*stack_a)->next->data > (*stack_a)->next->next->data)
        {
            /***/
            tmp = *stack_a;
            printf("1st if\n");
            rra(stack_a);
            while (tmp)
            {
                printf("the ptr from list3 is: %d\n", tmp->data);
                tmp = tmp->next;
            }
            // swap_a(stack_a);
            // ft_printf("1st one%d\n", (*stack_a)->data);
            // rotate_a(stack_a);
        }
    else if((*stack_a)->data < (*stack_a)->next->data && (*stack_a)->data > (*stack_a)->next->next->data)
        {
            tmp = *stack_a;
            while (tmp)
            {
                printf("the ptr from list3 is: %d\n", tmp->data);
                tmp = tmp->next;
            }
            printf("2st if\n");
            // rra(stack_a);
        }
    else
        {
            tmp = *stack_a;
            while (tmp)
            {
                printf("the ptr from list3 is: %d\n", tmp->data);
                tmp = tmp->next;
            }
            printf("3st if\n");
            // rotate_a(stack_a);
        }
}

void    list_4(t_list **stack_a, t_list **stack_b)
{
    while((*stack_a)->position != 4)
        rotate_a(stack_a);
    push_b(stack_a, stack_b);
    list_3(stack_a);
    push_a(stack_a, stack_b);
}

void    list_5(t_list **stack_a, t_list **stack_b)
{
    while((*stack_a)->position != 5)
        rotate_a(stack_a);
    push_b(stack_a, stack_b);
    while((*stack_a)->position != 4)
        rotate_a(stack_a);
    push_b(stack_a, stack_b);
    list_3(stack_a);
    push_a(stack_a, stack_b);
    push_a(stack_a, stack_b);
}

void    list_all(int ac, t_list **stack_a, t_list **stack_b)
{
    if(ac == 3)
        list_2(stack_a);
    else if( ac == 4)
        list_3(stack_a);
    else if( ac == 5)
        list_4(stack_a, stack_b);
    else if( ac == 6)
        list_5(stack_a, stack_b);
}