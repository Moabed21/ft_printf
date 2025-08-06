/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:37:26 by moabed            #+#    #+#             */
/*   Updated: 2025/08/06 19:57:32 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strchr(const char *s, int c)
{
        char *x;
        x = s;
        while(*x)
        {
                if(*x ==  c)
                return (x);
                x++;
        }
        return (x);
}

#include <stdio.h>
int     main(void)
{
        char x[] ="ahmad";
        char *p;
        p = ft_strchr(x,'x');
        printf("%c %c %c",p[0], p[1],p[2]);
}
