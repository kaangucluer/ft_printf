/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:00:17 by kgucluer          #+#    #+#             */
/*   Updated: 2023/07/13 18:04:21 by kgucluer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_typec(char *str)
{
    int i;
    
    i = -1;
    if(!str)
        return (write(1, "(null)", 6));
    while(str[++i])
        write(1,&str[i],1);
    return (i);
}

int ft_typeint(int k)
{
    int len;

    len = 0;

    if (k == -2147483648)
		return (write(1, "-2147483648", 11));
    if (k < 0)
    {
        len += write(1,"-",1);
        k = -1
    }
    if (k >= 10)
    {
        len +=ft_typeint(k/10);
    }
    else
     write(1, &"0123456789"[a % 10], 1);
    return (len);
}