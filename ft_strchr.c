/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:37:26 by moabed            #+#    #+#             */
/*   Updated: 2025/08/12 17:24:47 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	x;

	x = c;
	while (*s)
	{
		if (*s == x)
			return ((char *)s);
		s++;
	}
	return ((char *)s);
}
/*
#include <stdio.h>

int	main(void)
{
		char *p;

		char x[] ="ahmad";
		p = ft_strchr(x,'m');
		printf("%c %c %c",p[0], p[1],p[2]);
}
*/