/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriblin <tgriblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:35:54 by tgriblin          #+#    #+#             */
/*   Updated: 2023/10/16 09:24:05 by tgriblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_issep(char c, char sep)
{
	if (c == sep || c == '\0')
		return (1);
	return (0);
}

static int	ft_countwords(char const *s, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (!ft_issep(s[i], sep) && ft_issep(s[i - 1], sep))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_freetabtab(char **tabtab, int curr)
{
	curr--;
	while (curr >= 0)
	{
		free(tabtab[curr]);
		curr--;
	}
	free(tabtab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		start;
	int		i;
	int		j;

	strs = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (strs == NULL)
		return (ft_freetabtab(strs, 0));
	i = 0;
	j = 0;
	start = 0;
	while (s[i])
	{
		if (!ft_issep(s[i], c) && ft_issep(s[i - 1], c))
			start = i;
		if (!ft_issep(s[i], c) && ft_issep(s[i + 1], c))
		{
			strs[j] = ft_substr(s, start, i - start + 1);
			if (strs[j++] == NULL)
				return (ft_freetabtab(strs, j));
		}
		i++;
	}
	strs[j] = NULL;
	return (strs);
}
