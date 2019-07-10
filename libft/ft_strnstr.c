/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:42:18 by gfernand          #+#    #+#             */
/*   Updated: 2019/06/26 10:45:24 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s1[i] && (i < n))
	{
		while ((s1[i + j] == s2[j]) && s2[j] && ((i + j) < n))
			j++;
		if (!s2[j])
			return ((char *)&s1[i]);
		j = 0;
		i += 1;
	}
	if (!s2[0])
		return ((char *)&s1[i]);
	return (NULL);
}
