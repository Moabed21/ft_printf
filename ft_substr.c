/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 12:11:43 by moabed            #+#    #+#             */
/*   Updated: 2025/08/13 16:23:41 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*ptp;
	size_t	i;

	i = 0;
	s += start;
	p = malloc(len + 1);
	if (p == NULL)
	{
		return (p);
	}
	ptp = p;
	while (i < len)
	{
		*p++ = *s++;
		i++;
	}
	p[i] = '\0';
	return (ptp);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	x[] = "lorem ipsum dolor sit amet";
// 	char	*p;

// 	p = ft_substr(x, 7, 0);
// 	printf("%s", p);
// 	free(p);
// }
