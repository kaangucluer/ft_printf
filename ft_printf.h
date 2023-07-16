/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:49:55 by kgucluer          #+#    #+#             */
/*   Updated: 2023/07/16 21:40:41 by kgucluer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# ifndef BASE10
#  define BASE10 "0123456789"
# endif

# ifndef BASE16LOWER
#  define BASE16LOWER "0123456789abcdef"
# endif

# ifndef BASE16UPPER
#  define BASE16UPPER "0123456789ABCDEF"
# endif

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	type_convert(va_list va, char type);
int	ft_putchar(char k);

int	ft_strlen(char *base);
int	ft_typec(char *str);
int	ft_typeint(long k);
int	ft_putptr(uintptr_t n, char *base);
int	ft_type_xandx( unsigned int k, char c);
int	ft_typedec(unsigned int k);

#endif
