/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:24:24 by jcardina          #+#    #+#             */
/*   Updated: 2023/03/13 11:45:39 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if(nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
	return ;
}

void	ft_exa(unsigned int nb)
{
	if(nb >= 16)
		ft_exa(nb / 16);
	ft_putchar("0123456789abcdef"[nb % 16]);
}

int	main(void)
{
	unsigned int i;

	i = 188;

	ft_exa(i);
	return (0);
}
