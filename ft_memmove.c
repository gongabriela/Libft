/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:43:39 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/31 19:32:51 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src + n - 1;
	d = (unsigned char *)dst + n - 1;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (n > 0)
	{
		*d-- = *s--;
		n--;
	}
	return (dst);

	//fazer de forma optimizada corrigiu alguns erros mas gerou outros!
	/*unsigned char *s;
	unsigned char *d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (d > s)
	{
		while (0 < n)
		{
			d[n] = s[n];
			n--;
		}
	}
	else
		while (0 < n)
		{
			*d++ = *s++;
			n--;
		}
	return (dst);
}*/
