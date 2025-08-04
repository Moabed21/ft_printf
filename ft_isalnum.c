/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:51:27 by moabed            #+#    #+#             */
/*   Updated: 2025/08/04 11:51:46 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char x)
{
	if (!(x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		return (0);
	else
		return (1);
}

int	ft_isdigit(char x)
{
	if (x >= '0' && x <= '9')
		return (1);
	else
		return (0);
}

int	ft_isalnum(char x)
{
	if (ft_isdigit(x) || ft_isalpha(x))
		return (1);
	else
		return (0);
}
