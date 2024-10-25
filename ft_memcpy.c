/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:09:24 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/24 16:43:08 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
		
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

int	main(void)
{
	char src[99] = "999999999999999999999";
	char dest[11] = "111116789";
	char src2[99] = "999999999999999999999";
	char dest2[11] = "111116789";

	memcpy(dest2, src2, 1 * sizeof(char));
	ft_memcpy(dest, src, 1 * sizeof(char));
	printf("original function: %s\nmy function: %s", dest2, dest);
	return (0);
}

