/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <moabed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 14:41:57 by moabed            #+#    #+#             */
/*   Updated: 2025/08/17 20:09:24 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(const char *sentence, char c)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (sentence[i])
	{
		while (sentence[i] == c)
			i++;
		if (sentence[i] != c && sentence[i])
			counter++;
		while (sentence[i] && sentence[i] != c)
			i++;
	}
	return (counter);
}
static void	freefun(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
static int	wordlen(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}
static char	**splitted_arrf(char *sentence, char seperator, int wordscount,
		char **splitted_arr)
{
	int	len;
	int	i;
	
	i = 0;
	while (sentence[i] && wordscount)
	{
		len = 0;
		if (sentence[i] != seperator)
		{
			
			len++;
		}
		wordscount--;
	}
	return (splitted_arr);
}

char	**ft_split(const char *s, char c)
{
	int		wc;
	char	**splitted_arr;

	wc = countwords(s, c);
	splitted_arr = malloc(sizeof(char *) * (wc + 1));
	return (splitted_arrf((char *)s, c, wc, splitted_arr));
}
#include <stdio.h>

int	main(void)
{
	char x[] = "   the last wizard of all time ";
	printf("%d", countwords(x, ' '));
}