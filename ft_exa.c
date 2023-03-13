/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:22:28 by jcardina          #+#    #+#             */
/*   Updated: 2023/03/13 12:53:04 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_exa(unsigned int nb, const char format)
{
	if (nb >= 16)
		ft_exa(nb / 16, format);
	if (format == 'x')
		ft_putchar("0123456789abcdef"[nb % 16]);
	if (format == 'X')
		ft_putchar("0123456789ABCDEF"[nb % 16]);
}
