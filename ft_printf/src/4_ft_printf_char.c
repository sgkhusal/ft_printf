/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 23:09:22 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/20 19:51:15 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	printf_putchar_fd(t_print *p, char c)
{
	write((*p).fd, &c, 1);
	(*p).len++;
}

void	printf_putcharnb_fd(t_print *p, char c)
{
	if (c)
	{
		write((*p).fd, &c, 1);
		(*p).len++;
	}
}

void	printf_putstr_fd(t_print *p, const char *s, int size)
{
	if (s)
		(*p).len = (*p).len + write((*p).fd, s, size);
}

void	printf_c(t_print *p, t_flags *f, char c)
{
	if ((*f).minus == YES)
		printf_putchar_fd(p, c);
	while ((*f).width > 1)
	{
		printf_putchar_fd(p, ' ');
		(*f).width--;
	}
	if ((*f).minus == 0)
		printf_putchar_fd(p, c);
}

void	printf_s(t_print *p, t_flags *f, char *s)
{
	int	size;

	size = (int)ft_strlen(s);
	if ((*f).point == YES && (*f).precision < size)
		size = (*f).precision;
	if ((*f).minus == YES)
	{
		printf_putstr_fd(p, s, size);
		(*f).width -= size;
		printf_pad(p, (*f).width, 0, ' ');
	}
	else
	{
		printf_pad(p, (*f).width, size, ' ');
		printf_putstr_fd(p, s, size);
	}
}