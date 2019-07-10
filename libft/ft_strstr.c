/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:11:54 by gfernand          #+#    #+#             */
/*   Updated: 2019/06/26 14:31:02 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!s2[0])
		return ((char *)&s1[i]);
	while (s1[i])
	{
		while ((s1[i + j] == s2[j]) && s2[j])
			j++;
		if (!s2[j])
			return ((char *)&s1[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
