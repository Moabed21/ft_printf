/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:39:04 by moabed            #+#    #+#             */
/*   Updated: 2025/08/06 19:23:43 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
        unsigned char	*p;
	unsigned char	*v;

	p = (unsigned char *)s1;
	v = (unsigned char *)s2;
        while ((*v && n) || *p)
        {
                if(*p - *v != 0)
                        return (*p - *v);
                p++;
                v++;
        }
        return (0);
}
/*
#include <stdio.h>
int     main(void)
{
        char a[]="Az";
char b[]= "Azb";
int	x = ft_memcmp(a,b,3);
printf("%d",x);

}*/