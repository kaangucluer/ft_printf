/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:49:55 by kgucluer          #+#    #+#             */
/*   Updated: 2023/07/13 14:45:23 by kgucluer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include "./libft/libft.h"
#include <stdarg.h>

int ft_printf(const char *, ...)
int type_convert(va_list va, char type)
int ft_putchar(char k)


#endif