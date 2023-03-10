/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:16:28 by jcardina          #+#    #+#             */
/*   Updated: 2023/03/13 12:33:26 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF.H
# define FT_PRINTF.H

# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_format(va_list args, const char *str, int *nchar);
void	ft_exa(unsigned int nb);
void	ft_exa(unsigned int nb);
void	ft_putnbr_un(unsigned int);

#endif

