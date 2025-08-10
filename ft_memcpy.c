/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:52:14 by moabed            #+#    #+#             */
/*   Updated: 2025/08/10 04:36:57 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src)
{
	unsigned char		*dest1;
	const unsigned char	*src1;

	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	while (*src1)
	{
		ft_memset(dest1, *src1, sizeof(*src));
		src1++;
		dest1++;
	}
	return (dest1);
}
/*
#include <stdio.h>

int	main(void){
	char x[]="1234";
		char y[4];
ft_memcpy(y,x);
printf("%c",y[0]);
printf("%c",y[1]);
printf("%c",y[2]);
printf("%c",y[3]);
printf("%c",y[4]);
}*/