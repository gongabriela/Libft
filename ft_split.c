/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:50:18 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/11/03 17:55:20 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char    **ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	a;
	int b; 
	char	**split;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if(s[i] == c)
			j++;
		i++;
	}
	split = malloc((i + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	
	j = i + 1;
	i = 0;
	a = 0;
	b = 0;
	while(s[i] != '\0' || b < j)
	{
		while(s[i] != c && s[i] != '\0')
			i++;
		/*if (s[i] == c)
		{
			while (s[i] == c && s[i + 1] == c)
				i++;
		}*/ //no caso de haver varios c seguidos
		split[b] = ft_substr(s, a, i - a);
		if (split[b] == NULL)
			return (NULL);
		i++;
		a = i;
		b++;
	}
	split[b] = "\0";
	return(split);
}
