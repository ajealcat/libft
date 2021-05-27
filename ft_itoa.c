/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:12:11 by ajearuth          #+#    #+#             */
/*   Updated: 2021/05/27 17:28:44 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_div(int nbr, int *diviseur)
{
	int count;

	count = 1;
	*diviseur = 1;
	while (nbr / (*diviseur) > 9 )
	{
		*diviseur *= 10;
		count++;
	}
	return (count);
}

char		*ft_itoa(int nbr)
{
	int diviseur;
	int count;
	int minus;
	int i;
	char *str;

	if (nbr < 0)
		minus = 2;
	else
		minus = 1;
	if (nbr < 0)
		nbr *= -1;
	count  = ft_div(nbr, &diviseur);
	/*str = (char *)malloc(sizeof(char) * count + minus);
	if (str == 0)
		return (0);*/
	ft_calloc(str, count + minus);
	if (minus == 2)
	{
		str[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (diviseur > 0)
	{
		str[i] = nbr / diviseur + 48;
		nbr = nbr %  diviseur;
		diviseur = diviseur / 10;
		i++;
	}
	str[i] = 0;
	return (str);
}
