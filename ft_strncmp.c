/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazeroua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:15:50 by aazeroua          #+#    #+#             */
/*   Updated: 2019/04/02 20:29:26 by aazeroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	res;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	res = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (i < n && (a[i] || b[i]))
	{
		if (a[i] == b[i])
			i++;
		else
		{
			res = a[i] - b[i];
			break ;
		}
	}
	return (res);
}
