/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:32:45 by ajearuth          #+#    #+#             */
/*   Updated: 2021/05/21 12:07:24 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (dest_size == 0)
		return (i);
	while (src[j] && (j < dest_size - 1))
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}
