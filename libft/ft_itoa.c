/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:17:47 by gfernand          #+#    #+#             */
/*   Updated: 2019/06/17 08:10:45 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	size_t	i;
	size_t	nsize;
	char	*str;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nsize = ft_nbrlen(n, 10);
	if (!(str = (char*)malloc(sizeof(char) * (nsize + 1))))
		return (NULL);
	str[nsize] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		i++;
	}
	while (i < nsize--)
	{
		str[nsize] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
