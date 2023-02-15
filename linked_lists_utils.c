/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:39:48 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/15 23:46:35 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

t_list *ft_create_list(t_data *utils)
{
    int i;
    t_list *head;
    t_list *tmp;
    
    i = 0;
    head = ft_create_node(i, utils->all_data[i], 0);
    tmp = head;
   while(++i < utils->matrix_size)
    {
        tmp->next = ft_create_node(i, utils->all_data[i], 0);
        tmp = tmp->next;
    }
    return head;
}

int *sort_all_data(t_data *utils)
{
    int i;
    int j;
    int tmp;
    int *sorted;
    
    sorted = utils->all_data;
    i = -1;
    while(++i < utils->matrix_size)
    {
        j = i + 1;
        while(j < utils->matrix_size)
        {
            if(sorted[i] > sorted[j])
            {
                tmp = sorted[i] ;
                sorted[i] = sorted[j];
                sorted[j] = tmp;
            }
            j++;
        }
    }
    return(sorted);
}

void set_positions(int *array, t_list **list)
{
    int i;
    t_list *tmp;

    i = 0;
    while(array[i])
    {
        tmp = *list;
        while(tmp != NULL)
        {
            if(array[i] == tmp->data)
                tmp->position = i + 1;
            tmp = tmp->next;
        }
        i++;
    }
}

void    first_push_stack_a(t_list **stack_a, t_list **stack_b, t_data *utils)
{   
    while((*stack_a)->next)
    {
        if((*stack_a)->position <= utils->range + 1)
            {
                push_b(stack_a, stack_b);
                utils->range++;
                utils->pushes++;
            }
        if((*stack_b)->position < utils->pushes)
                rotate_b(stack_b);
        else if((*stack_a)->position > utils->range)
                rotate_a(stack_a);
    }
} 

void    indexing_stack_b(t_list **stack_b)
{
    t_list *tmp;
    int i;
    
    i = 1;
    tmp = *stack_b;
    while(tmp)
    {
        tmp->index = i;
        tmp = tmp->next;
        i++;
    }
}
// void    push_back_to_a(t_list **stack_a, t_list **stack_b,t_data *utils)
// {
//     while((*stack_b)->next)
//     {
//         if((*stack_b)->position == utils->pushes)
//     }
// }