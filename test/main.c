/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:24:24 by jcardina          #+#    #+#             */
/*   Updated: 2023/03/13 12:58:12 by jcardina         ###   ########.fr       */
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
	else if(nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if(nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
	return ;
}

void	ft_exa(unsigned int nb, const char format)
{
	if (nb >= 16)
		ft_exa(nb / 16, format);
	if (format == 'x')
		ft_putchar("0123456789abcdef"[nb % 16]);
	if (format == 'X')
		ft_putchar("0123456789ABCDEF"[nb % 16]);
}

void	ft_putnbr_un(unsigned int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
	return ;
}

int	main(void)
{
	unsigned int i;
	int a;
	char c;

	i = 3147483648;
	c = 'X';
	a = 188;

	ft_putnbr_un(i);
	ft_exa(a, c);
	return (0);
}
