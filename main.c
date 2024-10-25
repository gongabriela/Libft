/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:30:04 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/24 13:42:18 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

//memset_________________________________________________________________________
/*int	main(void)
{
	char c = '.';
	char str[] = "QUARENTAEDOIS";
	printf("%s\n", ft_memset(str, c, 2));

	return (0);
}

int	main(void)
{
	char str[7] = "Hello!!";
	memset(str, '.', 2*sizeof(char));
	printf("%s", str);
       return (0);
}
*/

//strlcpy__________________________________________________________________________

#include <bsd/string.h>
#include <string.h>

void	test(int size)
{
	char	src[25] = "BTS aquele grupo de kpop";
	char	dest[41] = "000000000000000000000000 e muito bom!";
	int r;

	printf("copied %d characters from the src %s to the dest %s.\n", size, src, dest);
	r = strlcpy(dest, src, size);
	printf("The result is %s\n\n", dest);
}

int	main(void)
{
	test(3);
	return (0);
}

