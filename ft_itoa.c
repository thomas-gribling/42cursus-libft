/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriblin <tgriblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:57:34 by tgriblin          #+#    #+#             */
/*   Updated: 2023/10/13 09:22:23 by tgriblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_pow(int n, int pow)
{
	if (pow == 0 || n == 1)
		return (1);
	if (n == 0)
		return (0);
	return (n * ft_pow(n, pow - 1));
}

static int	ft_intlen(int n)
{
	int	i;
	int	minus;

	i = 0;
	minus = 0;
	if (n < 0)
	{
		n = -n;
		minus++;
	}
	while (n / ft_pow(10, i) > 9)
		i++;
	return (i + 1 + minus);
}

char	*ft_itoa(int n)
{
	int		size;
	int		i;
	char	*out;

	if (n == -2147483648)
		return (ft_strjoin("-", "2147483648"));
	size = ft_intlen(n) - 1;
	out = malloc(size + 2);
	if (out == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		out[i] = '-';
		n = -n;
		i++;
	}
	while (size - i >= 0)
	{
		out[i] = (n / ft_pow(10, size - i)) % 10 + '0';
		i++;
	}
	out[i] = '\0';
	return (out);
}
