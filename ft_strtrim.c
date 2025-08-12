/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 00:26:16 by moabed            #+#    #+#             */
/*   Updated: 2025/08/12 09:55:20 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strstr(const char *str, const char *tofind)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	if (*tofind == '\0')
// 		return (0);
// 	while (str[i] != '\0')
// 	{
// 		while (tofind[j] != '\0' && str[i + j] == tofind[j])
// 			j++;
// 		if (tofind[j] == '\0')
// 			return (i);
// 		i++;
// 	}
// 	return (0);
// }
static int	instart(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (set[start])
	{
		if (set[start] != s1[start])
			break ;
		else
			start++;
	}
	if (start == ft_strlen(set))
		return (1);
	else
		return (0);
}
static int	inend(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(set);
	s1 += ft_strlen(s1);
	while (set[end])
	{
		if (set[end] != *s1)
			break ;
		else
		{
			end--;
			s1--;
		}
	}
	if (end == ft_strlen(set))
		return (1);
	else
		return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	if (instart(s1, set))
}

#include <stdio.h>

int	main(void)
{
	char x[] = "the last wizard ";
	char y[] = "last";

	char *p = ft_strtrim(x, y);
	printf("%s", p);
	free(p);
}