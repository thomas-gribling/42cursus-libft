/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriblin <tgriblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:46:22 by tgriblin          #+#    #+#             */
/*   Updated: 2023/10/10 09:34:27 by tgriblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	ch;
	char	*str;

	i = 0;
	j = -1;
	str = (char *)s;
	ch = (char)c;
	while (s[i])
	{
		if (s[i] == ch)
			j = i;
		i++;
	}
	if (j < 0 && ch != '\0')
		return (NULL);
	if (ch == '\0')
		j = i;
	return (str + j);
}
