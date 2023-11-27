/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriblin <tgriblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:17:26 by tgriblin          #+#    #+#             */
/*   Updated: 2023/10/02 16:39:03 by tgriblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	sign_count;
	int	out;

	i = 0;
	sign = 1;
	sign_count = 0;
	out = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
		sign_count++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && sign_count < 2)
	{
		out = 10 * out + nptr[i] - '0';
		i++;
	}
	return (sign * out);
}
