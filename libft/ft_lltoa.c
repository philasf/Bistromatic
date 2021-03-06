/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 23:19:19 by passef            #+#    #+#             */
/*   Updated: 2017/12/28 23:21:46 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itoalen(long long n)
{
	int i;

	i = 1;
	while (n / 10 > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_str(long long nb, int len, int neg)
{
	char	*str;
	int		i;

	i = len;
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	i--;
	while (nb / 10 != 0)
	{
		str[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	str[i] = nb % 10 + '0';
	i--;
	if (neg == 1)
		str[i] = '-';
	return (str);
}

char		*ft_lltoa(long long n)
{
	char				*str;
	int					i;
	int					neg;
	unsigned long long	nb;

	nb = (unsigned long long)n;
	neg = 0;
	i = 0;
	if (nb == -9223372036854775808ull)
	{
		str = ft_strdup("-9223372036854775808");
		return (str);
	}
	if (n < 0)
	{
		neg++;
		i++;
		n = -n;
	}
	i += ft_itoalen(n);
	str = ft_str(n, i, neg);
	return (str);
}
