/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriblin <tgriblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:57:32 by tgriblin          #+#    #+#             */
/*   Updated: 2023/10/12 08:53:02 by tgriblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr_big;
	size_t	i;
	size_t	j;

	ptr_big = (char *)big;
	if (little[0] == '\0' || little == big)
		return (ptr_big);
	i = 0;
	j = 0;
	while (big[i] && i < len && len > 0)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] && big[i + j] == little[j]
				&& i + j < len)
			{
				if (!little[j + 1])
					return ((char *)big + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
