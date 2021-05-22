/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 12:46:20 by ajearuth          #+#    #+#             */
/*   Updated: 2021/05/21 14:32:42 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned int *tmp;
	size_t i;


	tmp = (unsigned int)str;
	i = 0;
	while (i < n)
	{
		*tmp = '\0';
		++tmp;
	}
}
