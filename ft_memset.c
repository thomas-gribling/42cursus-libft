/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriblin <tgriblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:18:00 by tgriblin          #+#    #+#             */
/*   Updated: 2023/10/09 16:43:56 by tgriblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;

	if (n == 0)
		return (s);
	ptr = (char *)s;
	while (n--)
	{
		*ptr = c;
		if (n != 0)
			ptr++;
	}
	return (s);
}
