/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:19:54 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/29 14:30:27 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	long unsigned int	i;
	long unsigned int	src_length;
	long unsigned int	dst_length;

	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	i = dstsize - dst_length - 1;
	if (dstsize <= dst_length)
		return (src_length + dstsize);
	dst = dst + dst_length;
	while (*src != '\0' && i > 0)
	{
		*dst++ = *src++;
		i--;
	}
	*dst = '\0';
	return (src_length + dst_length);
}
