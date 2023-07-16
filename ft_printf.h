/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:49:55 by kgucluer          #+#    #+#             */
/*   Updated: 2023/07/15 15:10:27 by kgucluer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	type_convert(va_list va, char type);
int	ft_putchar(char k);
int	ft_typec(char *str);
int	ft_typeint(int k);
int	ft_type_dectohex(unsigned long long k, int count);
int	ft_type_xandx(unsigned long k, char c);
int	ft_typedec(unsigned int k);

#endif
