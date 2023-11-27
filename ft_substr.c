/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriblin <tgriblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:50:07 by tgriblin          #+#    #+#             */
/*   Updated: 2023/10/13 09:33:00 by tgriblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*out;

	if (len > ft_strlen(s))
		out = malloc(ft_strlen(s) + 1);
	else
		out = malloc(len + 1);
	if (out == NULL)
		return (NULL);
	i = 0;
	while (s[i] && i < len && start <= ft_strlen(s))
	{
		out[i] = s[start + i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
