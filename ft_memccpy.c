/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazeroua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:39:25 by aazeroua          #+#    #+#             */
/*   Updated: 2019/04/03 21:54:56 by aazeroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned int	i;

	i = 0;
	a = (unsigned char *)src;
	b = (unsigned char *)dst;
	while (i < n)
	{
		b[i] = a[i];
		if (a[i] == (unsigned char)c)
			break ;
		i++;
	}
	if (a[i] == (unsigned char)c)
		return (b + i + 1);
	return (NULL);
}
