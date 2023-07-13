/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:04:39 by kgucluer          #+#    #+#             */
/*   Updated: 2023/07/13 16:40:43 by kgucluer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
// malloc, free, write, va_start, va_arg, va_copy,
//va_end HARİCİ FONKSİYONLAR
int ft_putchar(char k)
{
    write(1, &k, 1);
}

int type_convert(va_list va, char type)
{

}


int ft_printf(const char *str, ...)
{
    va_list args;
    int index;
    int total_byte;

    va_start(str,args);
    index = 0;
    total_byte = 0;
    while(str[i])
    {
        if(str[i] == '%')
            total_byte += type_convert(args,str[++i]);
        else if (write(1,&str[i],1) == -1)
            return -1;
        i++;
    }
    va_end(args);
    return(total_byte);
}