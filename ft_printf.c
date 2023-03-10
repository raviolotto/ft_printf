/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:03:23 by jcardina          #+#    #+#             */
/*   Updated: 2023/03/10 16:14:36 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_format(va_list args, const char *str, int *nchar)
{
	//qui ci metto i casi

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
