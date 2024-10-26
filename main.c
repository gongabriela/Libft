/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:30:04 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/26 17:14:10 by ggoncalv         ###   ########.fr       */
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

/*//ft_isascii_________________________________________________________________________

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c = 127;
	printf("Is %d an ASCII character?\nThe original function says %d\nMy function says %d", c, isascii(c), ft_isascii(c));
	return (0);
}*/

/*//ft_isprint____________________________________________________________________________

#include <stdio.h>
#include<ctype.h>

int	main(void)
{
	int c = 32;
	printf("is %d a printable character?\nThe original function says %d\nMy function says %d", c, isprint(c), ft_isprint(c));
	return (0);
}*/

/*//ft_strlen_______________________________________________________________________________

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[50] = "";
	printf("What is the length of this string: %s?\nThe original function says %lu\nMy function says %d", str, strlen(str), ft_strlen(str));
	return (0);
}*/

//ft_memset___________________________________________________________________________________
//pedir testes pro chat
#include <stdio.h>
#include <string.h>

void test_zero_initialization() {
    char buffer[10];
    my_memset(buffer, 0, sizeof(buffer));
    
    // Check if all bytes are zero
    for (int i = 0; i < sizeof(buffer); i++) {
        if (buffer[i] != 0) {
            printf("Zero initialization test failed!\n");
            return;
        }
    }
    printf("Zero initialization test passed.\n");
}

int	main(void)
{
	return (0);
}

