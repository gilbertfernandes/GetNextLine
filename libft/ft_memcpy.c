/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:19:14 by gfernand          #+#    #+#             */
/*   Updated: 2019/06/26 15:39:32 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t len)
{
	char *d;
	char *s;

	d = dest;
	s = (char*)src;
	if (!dest && !src)
		return (NULL);
	while (len--)
		*d++ = *s++;
	return (dest);
}
