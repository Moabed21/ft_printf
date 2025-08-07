/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:23:21 by moabed            #+#    #+#             */
/*   Updated: 2025/08/07 13:12:52 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if(s == d || n == 0)
		return (dest);
	if(d > s && d < s + n)
	{
		d+=n;
		s+=n;
		while(n--)
		{
			*d = *s;
		}
	}
	else
	while (n--)
	{
		*d = *s;
		s++;
		d++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void){
	char x[]="1234";
		//char y[4];
ft_memmove(x+2,x,3);
printf("%c",x[0]);
printf("%c",x[1]);
printf("%c",x[2]);
printf("%c",x[3]);
printf("%c",x[4]);
}*/