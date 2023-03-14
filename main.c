/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:01:50 by jacopo            #+#    #+#             */
/*   Updated: 2023/03/14 19:30:46 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	char	*str = "abc";
	unsigned int 	i;
	int				j;
	void 			*p;

	i = 188;
	//j = 666;

	//ft_printf("questo è un test %p \n", p);
	//ft_printf("questo è un test %c \n", str[0]);
	j = ft_printf("%s\n", str);
	ft_printf("questa è j %i \n", j);
	//ft_printf("questo è un test %u \n", i);
	//ft_printf("questo è un test %d \n", i);
	//ft_printf("questo è un test %x \n", i);
	//ft_printf("questo è un test %X \n", i);

	j = printf("conta %s aaaa\n", str);
	printf("questa è j %i \n", j);
}
