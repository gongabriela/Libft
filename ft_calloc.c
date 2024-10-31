/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:55:16 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/31 18:33:06 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*temp;

	temp = malloc(count * size);
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}
