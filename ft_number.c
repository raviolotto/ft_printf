/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:13:56 by jcardina          #+#    #+#             */
/*   Updated: 2023/03/14 19:14:03 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb, int i)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	else if (nb < 0)
	{
		i++;
		ft_putchar('-');
		i = ft_putnbr(-nb, i);
	}
	else
	{
		if (nb > 9)
		{
			i++;
			i = ft_putnbr(nb / 10, i);
		}
		ft_putchar(nb % 10 + 48);
	}
	return (i);
}

int	ft_putnbr_un(unsigned int nb, int i)
{
	if (nb > 9)
	{
		i++;
		i = ft_putnbr_un(nb / 10, i);
	}
	ft_putchar(nb % 10 + 48);
	return (i);
}
