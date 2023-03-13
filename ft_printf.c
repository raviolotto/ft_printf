/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:03:23 by jcardina          #+#    #+#             */
/*   Updated: 2023/03/13 11:08:09 by jcardina         ###   ########.fr       */
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

	if (c == 'd')

	if (c == 'i')
		ft_putnbr(va_arg(args, int));
	if (c == 'i')

	if (c == 'x')

	if (c == 'X')

	if (c == '%')
		ft_putchar('%');
	return ;
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int	i;
	int	nchar;

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
