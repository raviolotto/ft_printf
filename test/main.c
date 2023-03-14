/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:24:24 by jcardina          #+#    #+#             */
/*   Updated: 2023/03/14 17:29:39 by jacopo           ###   ########.fr       */
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
	unsigned int	i;

	i = 0;
	while (str[i])
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

int	main(void)
{
	unsigned int	i = 4294967295;
	int				maxint = -147483648;
	int				x;
	int				a;
	int				b;
	char			c;
	char *str = "1234567890";
	void *p;

	c = 'X';
	a = 16;
	x = 1;

	a = ft_putstr(str);//stampa la stringa, a prende il valore di 10
	ft_putchar('\n');
	b = ft_putnbr(maxint, x);//mostra il valore di a e b diventa 2
	ft_putchar('\n');
	ft_putnbr(b, x);//stampa il valore di b
	ft_putchar('\n');
	a = 1999;
	b = ft_exa(a, c, x);//a viene stampato in esadecimale e diventa BC in capslock b prende il valore di 2
	ft_putchar('\n');
	a = ft_putnbr_un(i, x);//stampo un unsigned int i ed assegno ad a il valore di 10
	ft_putchar('\n');
	ft_putnbr(a, x);//stampo a che deve essere 10
	ft_putchar('\n');
	ft_putnbr(b, x);//stampo b che deve essere 3
	ft_putchar('\n');
	b = ft_putptr((unsigned long long) p, x);
	ft_putchar('\n');
	ft_putnbr(b, x);//stampo b che deve essere 3
	ft_putchar('\n');
	printf("il puntatore %p \n", p);
	return (0);
}
