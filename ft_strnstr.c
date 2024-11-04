/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:08:42 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/11/04 14:40:43 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	if (needle[0] == '\0')
		return ((char *)haystack);
	h = 0;
	while (haystack[h] != '\0' && h < len)
	{
		n = 0;
		while (haystack[h + n] == needle[n] && haystack[h + n] != '\0'
			&& h + n < len)
		{
			n++;
			if (needle[n] == '\0')
				return ((char *)haystack + h);
		}
		h++;
	}
	return (NULL);
}
