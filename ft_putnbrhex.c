/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:25:18 by mzoheir           #+#    #+#             */
/*   Updated: 2022/10/25 13:38:41 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrhex(unsigned long b, char *base)
{
	int	i;

	i = 0;
	if (b < 16)
		i += ft_putchar(base[b]);
	if (b >= 16)
	{
		i += ft_putnbrhex(b / 16, base);
		i += ft_putnbrhex(b % 16, base);
	}
	return (i);
}
