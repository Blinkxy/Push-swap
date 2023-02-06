/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:51:18 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/06 23:22:05 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char *av)
{
    int i;
    t_list *list;
    
    if (ac <= 1)
        return(0);
    else
    {
        
    }
}

char *each_arg(char *arg_array)
{
    int i;
    int j;
    int k;
    char **str;
    long int *int_arr;
    
    i = -1;
    while(arg_array[++i])
    {
        j = -1;
        if(str)
            free(str);
        str = ft_split(arg_array[i],' ');
        while(str[++j])
        {
            k = -1;
            while(str[j][++k])
            {
            if ((str[j][k] >= '0' && str[j][k] <= '9' && str[j][k+1] >= '0' && str[j][k+1] <= '9')
            || (str[j][k] == '+' && str[j][k+1] >= '0' && str[j][k+1] <= '9')
            || (str[j][k] == '-' && str[j][k+1] >= '0' && str[j][k+1] <= '9'))
                int_arr [j] = ft_atoi(str[j][k]);
            else
                return(0);
            }
    }
}
    i = -1;
    while(int_arr[++i])
        {
            while(int_arr[j] && j < ft_strlen(int_arr)
            if ()
        }
}
"Hello" "Hicham"