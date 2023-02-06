/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:43:28 by mzoheir           #+#    #+#             */
/*   Updated: 2022/10/25 13:10:14 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printf(const char *s, ...)
{
	va_list	p;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(p, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			count += ft_argprint(p, s[i + 1]);
			i++;
		}
		else
		{
			ft_putchar(s[i]);
			count++;
		}
		i++;
	}
	va_end(p);
	return (count);
}
// int main(void)
// {
// ft_printf("%s", "");
// }
// //     // printf(" NULL %s NULL ", NULL);
// // //     // printf("%d",i);
// // //     return (i);
// // }