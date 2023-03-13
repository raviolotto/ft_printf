/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:03:23 by jcardina          #+#    #+#             */
/*   Updated: 2023/03/13 13:48:09 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_format(va_list args, const char c, int *nchar)
{
	if (c == 'c')
		ft_putchar(va_arg(args, char));
	if (c == 's')
		ft_putstr(va_arg(args, char *));
	if (c == 'p')
		ft_putstr("0x");
		ft_putptr(va_arg(args, unsigned long long));
	if (c == 'd')
		ft_putnbr(va_arg(args, int));
	if (c == 'i')
		ft_putnbr(va_arg(args, int));
	if (c == 'i')
		ft_putnbr_un(va_arg(args, unsigned int));
	if (c == 'x')
		ft_exa(va_arg(args, unsigned int), c);
	if (c == 'X')
		ft_exa(va_arg(args, unsigned int), c);
	if (c == '%')
		ft_putchar('%');
	return ;
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int	i;
	int	nchar;

	nchar = 0;
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
	return (nchar);
}
