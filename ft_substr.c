/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 14:17:36 by ajearuth          #+#    #+#             */
/*   Updated: 2021/05/27 15:29:08 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;
	size_t	j;

	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (ret == NULL || str == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (str[i] && j < len && i <= ft_strlen(str))
	{
		ret[j] = str[i];
		++j;
		++i;
	}
	ret[j] = '\0';
	return (ret);
}
