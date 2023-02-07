/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoheir <mzoheir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:46:25 by mzoheir           #+#    #+#             */
/*   Updated: 2023/02/07 18:35:45 by mzoheir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define BASE_LOW "0123456789abcdef"
# define BASE_UP "0123456789ABCDEF"

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct t_node
{
	int			arg;
	int			index;
	char		*data;
	struct t_node	*next;
}				t_list;

t_list			*ft_create_elem(void *data);
void			ft_list_push_front(t_list *begin_list, void *data);
int				ft_list_size(t_list *begin_list);
void			ft_list_push_back(t_list *begin_list, void *data);
t_list			*ft_list_push_strs(int size, char **strs);
void			ft_list_foreach(t_list *begin_list, void (*f)(void *));
void			rrr(t_list *stack_a, t_list *stack_b);
void			rrb(t_list *stack_b);
void			rra(t_list *stack_a);
void			rr(t_list *stack_a, t_list *stack_b);
void			rotate_b(t_list *stack_b);
void			rotate_a(t_list *stack_a);
void			push_b(t_list *stack_a, t_list *stack_b);
void			push_a(t_list *stack_a, t_list *stack_b);
void			ss(t_list *stack_a, t_list *stack_b);
void			swap_b(t_list *stack_b);
void			swap_a(t_list *stack_a);
char			*ft_strjoin(char *s1, char *s2);
char 			**each_arg(char **arg_array, int ac);
int				ft_argprint(va_list p, char c);
int				ft_atoi(char *str);
int				ft_printf(char *s, ...);
int				ft_strlen(char *s);
int				ft_putnbr(long n);
int				ft_putnbrhex(long b, char *base);
char			**ft_split(char *str, char c);
char			*ft_substr(char *s, int start, int len);
int				ft_putchar(char c);
int				ft_unsigned(unsigned int k);
int				ft_putstr(char *s);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
#endif