/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:51:18 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/07 19:18:38 by mzoheir          ###   ########.fr       */
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
    int i = -1;
    int dlen = ft_strlen(str1);
    if (!str1 || !str2)
        return (0);
    while (++i < ft_strlen(str2))
        str1[dlen + i] = str2[i];
    str1[dlen + i] = ' ';
    str1[dlen + ++i] = '\0';
    return (0);
}

char **return_arg(char **argv, int argc)
{
    char *arg;
   char **matrix;
    int  max_len;
    int i = 1;

    max_len = 0;
    while (i < argc)
        max_len += ft_strlen(argv[i++]) + 1;
    arg = malloc(sizeof(char) * max_len);
    i = 1;
    while (i < argc)
        concatinate(arg, argv[i++]);
    matrix = ft_split(arg, ' ');
    return (matrix);
}

int main(int ac, char **av)
{
    int i;
    // t_list *list;
    char **str;


   if (ac >= 2)
   {
   
i = 1;
//str = each_arg(av,ac);
str = return_arg(av, ac);
// while(++i)
// ft_printf("arguments:%s\n",str[i]);
}
}

char **each_arg(char **arg_array, int ac)
{
    int i;
    // int j;
    // int k;
    char *join;
    // long int *int_arr;
    
    i = 1;
    join = malloc(1);
    while(i < ac)
    {
        join = ft_strjoin(join, arg_array[i]);
        i++;
    }
//     j = 0;
//     while(str[j])
//     {
//     k = 0;
//         while(str[j][k])    
//         {
//             if (!(str[j][k] >= '0' && str[j][k] <= '9')
//         || !(str[j][k] == '+' && str[j][k+1] >= '0' && str[j][k+1] <= '9')
//         || !(str[j][k] == '-' && str[j][k+1] >= '0' && str[j][k+1] <= '9'))
//             exit(1);
//         k++;
//     }
//     j++;
// }
return(ft_split(join,' '));
}

// int_arr [j] = ft_atoi(str[j][k]);

//     i = -1;
//     while(int_arr[++i])
//         {
//             while(int_arr[j] && j < ft_strlen(int_arr))
//             if ()
//         }
// }
