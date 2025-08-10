/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 00:26:16 by moabed            #+#    #+#             */
/*   Updated: 2025/08/10 04:42:22 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strstr(const char *str, const char *tofind)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*tofind == '\0')
		return (0);
	while (str[i] != '\0')
	{
		while (tofind[j] != '\0' && str[i + j] == tofind[j])
			j++;
		if (tofind[j] == '\0')
			return (i);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*totalstr;
	char	*ptr;
	size_t	i;
	size_t	trimsize;

	if (set == NULL)
		return ((char *)s1);
	totalstr = malloc((ft_strlen(s1) - ft_strlen(set) + 1) * sizeof(char));
	ptr = totalstr;
	i = 0;
	trimsize = ft_strlen(set);
	if (ft_strstr(s1, set) == 0)
		;
	{
		s1 += trimsize;
		while (*s1)
		{
			*totalstr = *s1;
			totalstr++;
			s1++;
		}
	}
}
/*
#include <stdio.h>

int	main(void)
		{
		char x[] = "the last wizard ";
		char y[] = "last";

		char *p = ft_strtrim(x,y);
		printf("%s",p);
		free(p);
}*/