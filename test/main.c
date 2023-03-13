/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:24:24 by jcardina          #+#    #+#             */
/*   Updated: 2023/03/13 14:12:30 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
	i = ft_strlen(str);
return (i);
}

int	ft_putnbr(int nb, int i)
{
	if(nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	else if(nb < 0)
	{
		i++;
		ft_putchar('-');
		ft_putnbr(-nb, i);
	}
	else
	{
		if(nb > 9)
		{
			i++;
			ft_putnbr(nb / 10, i);
		}
		ft_putchar(nb % 10 + 48);
	}
	return (i);
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

void	ft_putnbr_un(unsigned int nb, int i)
{
	if (nb > 9)
	{
		i++;
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + 48);
	return ;
}

int	main(void)
{
	unsigned int i;
	int x;
	int a;
	int b;
	char c;
	char *str = "1234567890";

	i = 3147483648;
	c = 'X';
	a = 16;
	x = 1;

	a = ft_putstr(str);
	ft_putchar('\n');
	b = ft_putnbr(a, x);
	ft_putchar('\n');
	printf("%i", b);
	ft_putchar('\n');
	return (0);
}
