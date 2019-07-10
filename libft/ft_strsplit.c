/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:21:08 by gfernand          #+#    #+#             */
/*   Updated: 2019/06/26 14:33:43 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char		**str2;
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	k = 0;
	if (!s || !c || !(str2 = (char**)malloc(sizeof(char*) *
					(ft_wordcount(s, c) + 1))))
		return (NULL);
	while (i < ft_wordcount(s, c))
	{
		j = 0;
		if (!(str2[i] = (char*)malloc(sizeof(char) *
						(ft_wordlen(&s[k], c) + 1))))
			return (NULL);
		while (s[k] == c)
			k++;
		while (s[k] != c && s[k] != '\0')
			str2[i][j++] = s[k++];
		str2[i][j] = '\0';
		i++;
	}
	str2[i] = NULL;
	return (str2);
}
