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