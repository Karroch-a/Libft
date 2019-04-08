/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazeroua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 21:27:55 by aazeroua          #+#    #+#             */
/*   Updated: 2019/04/02 23:34:07 by aazeroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		j;
	int		k;
	int		found;
	char	*a;

	i = -1;
	a = (char *)str;
	while (a[++i])
	{
		found = 1;
		k = i - 1;
		j = -1;
		while (to_find[++j])
		{
			if (to_find[j] == a[++k])
				found = found && 1;
			else
				found = 0;
		}
		if (found)
			return (a + i);
	}
	return (0);
}
