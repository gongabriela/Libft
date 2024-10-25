/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:43:09 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/24 16:09:11 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*i;

	i = (unsigned char *)s;
	while (n > 0)
	{
		*i = '\0';
		i++;
		n--;
	}
}

/*int	main(void)
{
	char str[11] = "1111111111";
	char str[11] = "1111111111";
	bzero
	ft_bzero(str + 5, 5);
	printf("%s", str);
	return (0);
}*/
