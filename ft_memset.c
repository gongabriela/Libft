/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:12:35 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/24 15:42:52 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

/*#include <string.h>

int     main(void)
{
        int n = 17;
	int c = 'i';
        char str[50] = "QUARENTAEDOIS";
	char str2[50] = "QUARENTAEDOIS";
        
	memset(str, c, n);
	ft_memset(str2, c, n); 
	printf("original function: %s\nmy function: %s", str, str2);
        return (0);
}*/
