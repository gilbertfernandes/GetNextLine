/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:34:43 by gfernand          #+#    #+#             */
/*   Updated: 2019/06/17 08:10:54 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	unsigned char *n;

	n = (unsigned char*)malloc(size);
	if (size)
	{
		if (n == NULL)
			return (NULL);
		while (size)
		{
			size--;
			n[size] = 0;
		}
	}
	return ((void*)n);
}
