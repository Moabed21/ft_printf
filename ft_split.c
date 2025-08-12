/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:41:33 by moabed            #+#    #+#             */
/*   Updated: 2025/08/12 11:13:45 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	occurences(char const *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		counter++;
		s++;
	}
	return (++counter);
}
char	**ft_split(char const *s, char c)
{
	return (NULL);
}
/**
int	main(void)
{
	ft_split("          salam                 baybars        sfdpijds              ",
		' ');
	return (0);
}*/
