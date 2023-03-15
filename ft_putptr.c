/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:41:24 by jcardina          #+#    #+#             */
/*   Updated: 2023/03/15 11:08:59 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long ptr, int i)
{
	if (ptr >= 16)
	{
		i++;
		i = ft_putptr(ptr / 16, i);
	}
	ft_putchar("0123456789abcdef"[ptr % 16]);
	return (i);
}
