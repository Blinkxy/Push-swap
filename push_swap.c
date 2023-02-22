/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:51:18 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/23 00:45:38 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



int count_space(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && str[i] != ' ')
			i++;
	}
    return (count);
}

int    concatinate(char *str1, char *str2)
{
    int i;
    int dlen;
    
    dlen = ft_strlen(str1);
    i = -1;
    if (!str1 || !str2)
        return (0);
    while (++i < ft_strlen(str2))
        str1[dlen + i] = str2[i];
    str1[dlen + i] = ' ';
    str1[dlen + ++i] = '\0';
    return (0);
}

int  valid_args(t_data *utils)
{       
   int i;
   int k;
   
    i = -1; 
    while(utils->matrix[++i])
    {
    k = -1;
        while(utils->matrix[i][++k])
        {
            if ((utils->matrix[i][k] == '+' || utils->matrix[i][k] == '-') && !(utils->matrix[i][k + 1] >= '0' && utils->matrix[i][k + 1] <= '9'))
                return(0);
            if (!(utils->matrix[i][k] == '+' || utils->matrix[i][k] == '-' || (utils->matrix[i][k] >= '0' && utils->matrix[i][k] <= '9')))
                return(0); 
            if (utils->matrix[i][k] >= '0' && utils->matrix[i][k] <= '9' && (utils->matrix[i][k+1] == '-' || utils->matrix[i][k+1] == '+'))
                return(0);
        }
    }
return(1);
}

int valid_arg_bis(char **av)
{
      int i;
      int p;
      int j;
     
      p = 0;
      i = 0;
    while(av[++i])
    {
        j = 0;
        if(av[i][0] == '\0')
            return(0);
        while(av[i][j] == ' ')
            j++;
        if(av[i][j] == '\0')
            return(0);
        while(av[i][j])
        {
            if((av[i][j] >= '0' && av[i][j] <= '9') || av[i][j] == '+' || av[i][j] == '-' || av[i][j] == ' ')
                j++;
            else
                return(0);
        }
    }
return(1);
}

void return_args(char **av, int ac, t_data *utils)
{
    char *arg;
    int  max_len;
    int i;

    max_len = 0;
    i = 0;
    while (++i < ac)
        max_len += ft_strlen(av[i]) + 1;
    arg = malloc(sizeof(char) * max_len + 1);
    i = 0;
    while (++i < ac)
        concatinate(arg, av[i]);
    utils->matrix_size = count_space(arg);
    utils->matrix = ft_split(arg, ' ');
}

void free_all(t_data *utils)
{
    int i;

    i = -1;
    while(utils->matrix[++i])
        free(utils->matrix[i]);
    free(utils->matrix);
    if(utils->all_data)
        free(utils->all_data);
    free(utils);
    exit(0);
}

int main(int ac, char **av) 
{
    int *sorted_array;
    t_data *utils;
    t_list *stack_a;
    t_list *stack_b;
    
    stack_b = NULL;
    stack_a = NULL;
   if (ac > 2)
    {
        error_arg_bis(av);
        utils = (t_data *)malloc(sizeof(t_data));    
        return_args(av, ac, utils);
        utils->all_data = (int *)ft_calloc(utils->matrix_size, sizeof(int));
        error_arg(utils);
        error_int(utils);
        error_dupe(utils);
        stack_a = ft_create_list(utils);
        sorted_array = sort_all_data(utils);
        set_positions(sorted_array,&stack_a,utils);
        
        list_all(ac,&stack_a,&stack_b);
        /*
        if (ac <= 100 && ac > 6)
        {
            utils->range = 15;
            first_push_stack_a(&stack_a, &stack_b, utils);
            push_back_to_a(&stack_a, &stack_b,utils);
        }
        if (ac > 100)
        {
            utils->range = 30;
            first_push_stack_a(&stack_a, &stack_b, utils);
            push_back_to_a(&stack_a, &stack_b,utils);
        }
        */
        //  int i = 1;

    }
return(0);
}
