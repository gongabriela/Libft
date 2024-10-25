/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:30:04 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/25 20:06:22 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*//ft_isalpha___________________________________________________________________

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c = 'Z';
	printf("Is %c a printable character?\nThe original function says %d\nmy function says %d\n\n", c, isalpha(c), ft_isalpha(c));
	
	int i = 400;
	printf("Is %d a printable character?\nThe original function says %d\nmy function says %d", i, isalpha(i), ft_isalpha(i));
	return (0);
}*/

/*//ft_isdigit______________________________________________________________________

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char c = 'y';
	printf("Is %c a digit?\nThe original function says %d\nMy function says %d", c, isdigit(c), ft_isdigit(c));
	return (0);
}*/

/*//ft_isalnum______________________________________________________________________

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c = 'a';
	printf("Is %c a alphabetical character or a digit?\nThe original function says %d\nMy function says %d\n\n", c, isalnum(c), ft_isalnum(c));
	return (0);
}*/

//ft_isascii_________________________________________________________________________

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c = 127;
	printf("Is %d an ASCII character?\nThe original function says %d\nMy function says %d", c, isascii(c), ft_isascii(c));
	return (0);
}