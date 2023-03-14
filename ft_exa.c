/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:22:28 by jcardina          #+#    #+#             */
/*   Updated: 2023/03/14 17:07:29 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_exa(unsigned int nb, const char format, int i)
{
	if (nb >= 16)
	{
		i++;
		i = ft_exa(nb / 16, format, i);
	}
	if (format == 'x')
		ft_putchar("0123456789abcdef"[nb % 16]);
	if (format == 'X')
		ft_putchar("0123456789ABCDEF"[nb % 16]);
	return (i);
}
