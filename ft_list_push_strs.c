/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:42:57 by mzoheir           #+#    #+#             */
/*   Updated: 2023/01/30 16:42:25 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"


t_list *ft_list_push_strs(int size, char **strs)
{
    t_list *head;
    t_list *list;
    int i;
    
    i = 0;
    list = ft_create_elem(strs[size - 1]);
    head = list;
    while(++i <= size-1)
    {
        list->next = ft_create_elem(strs[size - 1 - i]);
            list = list->next;
        if(i > size)
        {
            list = NULL;
            free(list);
        }
    }
    
    return (head);
}

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
    
int main()
{

	t_list	*begin;
	char	**strs;

	strs = malloc(sizeof(char*) * 5);
	strs[0] = "bite";
	strs[1] = "bute";
	strs[2] = "bate";
	strs[3] = "bote";
	strs[4] = "bete";
	begin = ft_list_push_strs(5, strs);
	while (begin)
	{
		printf("%s\n", begin->data);
		begin = begin->next;
	}
}