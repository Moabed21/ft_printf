/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:23:21 by moabed            #+#    #+#             */
/*   Updated: 2025/08/06 17:19:21 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	v;

	p = (unsigned char *)s;
	v = (unsigned char)c;
	while (n--)
	{
		*p = v;
		p++;
	}
	return (p);
}

void *ft_memmove(void *dest, const void *src, size_t n)
{
        while(n)
	{
                ft_memset((unsigned char *)dest,*(unsigned char *)src,sizeof(*(unsigned char *)src));
                src++;
                dest++;
                n--;
	}
        return (dest);
}
/*
#include <stdio.h>
        
int	main(void){
	char x[]="1234";
        char y[4];
ft_memmove(y,x,3);
printf("%c",y[0]);
printf("%c",y[1]);
printf("%c",y[2]);
printf("%c",y[3]);
printf("%c",y[4]);
}*/