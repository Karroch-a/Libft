/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazeroua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:36:28 by aazeroua          #+#    #+#             */
/*   Updated: 2019/04/06 19:21:46 by aazeroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	unsigned int	res;
	int				i;
	int				sign;
	char			*a;

	i = 0;
	res = 0;
	sign = 1;
	a = (char *)str;
	while ((a[i] >= 9 && a[i] <= 13) || a[i] == ' ')
		i++;
	if (a[i] == '-')
		sign = -1;
	if (a[i] == '-' || a[i] == '+')
		i++;
	while (a[i] >= '0' && a[i] <= '9')
	{
		res = res * 10 + a[i] - '0';
		i++;
	}
	if (res > 2147483647 && sign == 1)
		return (-1);
	if (res > 2147483648 && sign == -1)
		return (0);
	return (res * sign);
}
