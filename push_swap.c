/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:51:18 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/07 21:58:32 by mzoheir          ###   ########.fr       */
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

char **return_arg(char **argv, int argc, t_data *utils)
{
    char *arg;
    int  max_len;
    int i = 1;

    max_len = 0;
    while (i < argc)
        max_len += ft_strlen(argv[i++]) + 1;
    arg = malloc(sizeof(char) * max_len);
    i = 1;
    while (i < argc)
        concatinate(arg, argv[i++]);
    utils->matrix = ft_split(arg, ' ');
    utils->matrix_size = count_space(arg);
    return (utils->matrix);
}

int main(int ac, char **av)
{
    int i;
    t_data *utils;
    char **str;
    // t_list *list;
   if (ac >= 2)
   {
i = -1;
utils = (t_data *)malloc(sizeof(t_data));    
str = return_arg(av, ac, utils);
while(++i < utils->matrix_size)
ft_printf("arguments:%s\n",str[i]);
    }
    // free(utils);
}

// void  valid_args()
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
