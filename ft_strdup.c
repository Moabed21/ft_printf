/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:47:19 by moabed            #+#    #+#             */
/*   Updated: 2025/08/10 04:40:50 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		length;

	length = ft_strlen(src);
	dest = malloc(sizeof(char) * length);
	ft_strcpy(dest, src);
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
char	*x = "string is";
printf("%s",ft_strdup(x));
}*/
