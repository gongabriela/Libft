/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:50:18 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/11/01 19:02:38 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char    **ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	char    **split;

	//quantas strings estarao na array
	i = 0;
	while (!s) 
	{
		if (*s == c)
			i++;
		s++;
	}
	split = ft_calloc(i, sizeof(char *));
	if (split == NULL)
		return (NULL);
	//alocar espaco para cada uma das palavras e ja passar pra split
	i = 0;
	j = 0;
	k = 0;
	while (s[j] != '\0')
	{	
		k = j;
		while (s[j] != c && s[j] != '\0')
			j++;
		split[i] = ft_calloc(j - k, sizeof(char));
		ft_substr(s, k, j - k);
		if (split[i] == NULL)
			return (NULL);
		i++;
	}
	return (split);
}