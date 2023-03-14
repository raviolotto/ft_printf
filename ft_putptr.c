/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:41:24 by jcardina          #+#    #+#             */
/*   Updated: 2023/03/14 17:30:53 by jacopo           ###   ########.fr       */
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
	return(i);
}
