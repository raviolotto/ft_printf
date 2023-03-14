/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:03:23 by jcardina          #+#    #+#             */
/*   Updated: 2023/03/14 19:15:40 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list args, const char c, int *nchar)
{
	int	x;

	x = 1;
	if (c == 'c')
		nchar += ft_putchar(va_arg(args, int));
	if (c == 's')
		nchar += ft_putstr(va_arg(args, char *));
	if (c == 'p')
	{
		nchar += ft_putstr("0x");
		nchar += ft_putptr(va_arg(args, unsigned long long), x);
	}
	if (c == 'd')
		nchar += ft_putnbr(va_arg(args, int), x);
	if (c == 'i')
		nchar += ft_putnbr(va_arg(args, int), x);
	if (c == 'u')
		nchar += ft_putnbr_un(va_arg(args, unsigned int), x);
	if (c == 'x')
		nchar += ft_exa(va_arg(args, unsigned int), c, x);
	if (c == 'X')
		nchar += ft_exa(va_arg(args, unsigned int), c, x);
	if (c == '%')
		nchar += ft_putchar('%');
	return ;
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		nchar;

	nchar = 0;
	i = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_format(args, str[++i], &nchar);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
			nchar++;
		}
	}
	va_end(args);
	return (nchar);
}
