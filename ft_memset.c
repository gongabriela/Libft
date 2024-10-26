/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:12:35 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/26 17:14:12 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*j;	

	j = (unsigned char *)str;
	while (n > 0)
	{
		*j = (unsigned char)c;
		j++;
		n--;
	}
	return (str);
}
