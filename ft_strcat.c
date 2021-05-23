/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 11:19:47 by ajearuth          #+#    #+#             */
/*   Updated: 2021/05/23 14:26:51 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	size;

	size = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[size] = src[i];
		++i;
		++size;
	}
	dest[size] = '\0';
	return (dest);
}
