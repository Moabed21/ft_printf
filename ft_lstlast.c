/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 02:12:08 by moabed            #+#    #+#             */
/*   Updated: 2025/08/16 03:25:34 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptrlast;

	if (!lst)
		return (NULL);
	ptrlast = lst;
	while (ptrlast->next)
	{
		ptrlast = ptrlast->next;
	}
	return (ptrlast);
}
