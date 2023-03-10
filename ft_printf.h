/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:16:28 by jcardina          #+#    #+#             */
/*   Updated: 2023/03/10 16:15:37 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF.H
# define FT_PRINTF.H

# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_format(va_list args, const char *str, int *nchar);

#endif

