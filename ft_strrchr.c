/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 14:31:54 by moabed            #+#    #+#             */
/*   Updated: 2025/08/12 17:25:25 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	while (*s)
		s++;
	s--;
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		else
			s--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
		char *p;

		char x[] ="ahmad";
		p = ft_strrchr(x,'a');
		printf("%c %c %c",p[0], p[1],p[2]);
}
*/