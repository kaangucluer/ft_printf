/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:49:55 by kgucluer          #+#    #+#             */
/*   Updated: 2023/07/15 14:23:50 by kgucluer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int ft_printf(const char *str, ...)
int type_convert(va_list va, char type)
int ft_putchar(char k)
int ft_typec(char *str)
int ft_typeint(int k)
int ft_type_dectohex(unsigned long k, int count)
int ft_type_xandX(unsigned long k, char c)
int ft_typedec(unsigned int k)

#endif
