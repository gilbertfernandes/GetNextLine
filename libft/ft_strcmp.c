/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:33:54 by gfernand          #+#    #+#             */
/*   Updated: 2019/06/26 10:29:26 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
