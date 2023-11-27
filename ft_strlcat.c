/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriblin <tgriblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:55:36 by tgriblin          #+#    #+#             */
/*   Updated: 2023/10/12 15:10:54 by tgriblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		d_size;

	if (size < 1)
		return (ft_strlen(src));
	d_size = 0;
	while (dst[d_size] && d_size < size)
		d_size++;
	i = 0;
	while (src[i] && d_size + i < size - 1)
	{
		dst[d_size + i] = src[i];
		i++;
	}
	if (d_size + i < size)
		dst[d_size + i] = '\0';
	return (d_size + ft_strlen(src));
}
