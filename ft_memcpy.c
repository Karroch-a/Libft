/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazeroua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:17:00 by aazeroua          #+#    #+#             */
/*   Updated: 2019/04/03 17:31:30 by aazeroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
		i++;
	}
	return (b);
}
