/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriblin <tgriblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:45:36 by tgriblin          #+#    #+#             */
/*   Updated: 2023/10/10 09:18:46 by tgriblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;
	char	*str;

	i = 0;
	str = (char *)s;
	ch = (char)c;
	while (str[i] != ch && str[i])
		i++;
	if (str[i] == '\0' && ch != '\0')
		return (NULL);
	return (str + i);
}
