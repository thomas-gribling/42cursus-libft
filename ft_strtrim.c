/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriblin <tgriblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:34:03 by tgriblin          #+#    #+#             */
/*   Updated: 2023/10/12 16:16:37 by tgriblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_isin(const char *s, const char c)
{
	int	i;

	i = 0 ;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	i;
	size_t	bounds[2];

	i = 0;
	bounds[0] = 0;
	if ((ft_strlen(s1) == 0 && ft_strlen(set) == 0) || ft_strlen(s1) == 0)
		return (ft_calloc(1, sizeof(char)));
	bounds[1] = ft_strlen(s1) - 1;
	while (ft_isin(set, s1[bounds[1]]) && bounds[1] > 0)
		bounds[1]--;
	if (bounds[1] == 0)
		return (ft_calloc(1, sizeof(char)));
	while (ft_isin(set, s1[bounds[0]]))
		bounds[0]++;
	s2 = malloc(bounds[1] - bounds[0] + 2);
	if (s2 == NULL)
		return (NULL);
	while (bounds[0] + i <= bounds[1])
	{
		s2[i] = s1[bounds[0] + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
