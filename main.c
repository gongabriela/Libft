/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:30:04 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/31 17:16:21 by ggoncalv         ###   ########.fr       */
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

/*//ft_memset___________________________________________________________________________________

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	array[10];
	char	array2[10];
	//test 1: set memory to zero
	memset(array, 0, sizeof(array));
	ft_memset(array2, 0, sizeof(array2));
	printf("Setting memory to zero\nOriginal function: %s\nMy function: %s\n\n", array, array2);
	//test2: set memory to a specific value:
	memset(array, 'A', sizeof(array));
	ft_memset(array2, 'A', sizeof(array2));
	printf("set memory to a specific value:\nOriginal function: %s\nMy function: %s\n\n", array, array2);
	//test3: change 0 bytes
	memset(array, 'B', 1);
	ft_memset(array2, 'B', 1);
	printf("Change the first byte: \nOriginal function: %s\nMy function: %s\n\n", array, array2);
	//maximum char value
	memset(array, 254, sizeof(array));
	ft_memset(array2, 254, sizeof(array2));
	printf("Change bytes to maximum char value (255): \nOriginal function: %s\nMy function: %s\n\n", array, array2);
	//self-overlap
	return (0);
}*/

/*//ft_bzero_______________________________________________________________________________________

#include <stdio.h>
#include <string.h>

int	main(void)
{
	//test1: zeroing a small buffer
	char	buffer[10];
	char	buffer2[10];

	bzero(buffer, sizeof(buffer));
	ft_bzero(buffer2, sizeof(buffer2));

	printf("test1: zeroing a small buffer\nOriginal function: %s\nMy function: %s\n\n", buffer, buffer2);
	//test2: zero length
	char	test[20]= "1, 2, 3, 4, 5"; //queria fazer com {} e nao tava dando certo. porque?
	char	test2[20] = "1, 2, 3, 4, 5";

	bzero(test, (0)); //tem que por os () se nao nao compila. porque? a minha funcao nao precisa disso!
	ft_bzero(test2, 0); //deu 0, porque?
	printf("test2: zero length\nOriginal function: %s\nMy function: %s\n\n", test, test2);
	//test3: self-overlap
	char	str[20] = "HelloWorld";
	char	str2[20] = "HelloWorld";

	bzero(str + 5, 5);
	ft_bzero(str2 + 5, 5);
	
	printf("test3: self-overlap\nOriginal function: %s\nMy function: %s", str, str2);
	return (0);
} */

/*//ft_memcpy_________________________________________________________________________________________

#include <stdio.h>
#include <string.h>
#include <assert.h>

int	main(void)
{
	//test1: simple copy PASS
	char src[] = "Hello, World!";
	char dest[20];
	char src2[] = "Hello, World!";
	char dest2[20];
	memcpy(dest, src, strlen(src) + 1);
	ft_memcpy(dest2, src2, strlen(src2) + 1); // +1 to include null terminator
	printf("test1: simple copy\nOriginal function: %s\nMy function: %s\n\n", dest, dest2);

	//test2: zero bytes PASS
	char src3[] = "Test";
	char dest3[20] = {0};
	char src4[] = "Test";
	char dest4[20] = {0};
	memcpy(dest3, src3, 0);
	ft_memcpy(dest4, src4, 0);
	printf("test2: zero bytes\nOriginal function: %s\nMy function: %s\n\n", dest3, dest4);

	//test3: self-overlap PASS
	char buffer[20] = "HelloWorld";
	char buffer2[20] = "HelloWorld";
	memcpy(buffer + 5, buffer, 5);
	ft_memcpy(buffer2 + 5, buffer2, 5);
	printf("test3: self-overlap\nOriginal function: %s\nMy function: %s\n\n", buffer, buffer2);

	//test4: large arrays PASS
	char lsrc[1000];
	char ldest[1000];
	for (int i = 0; i < 1000; i++) lsrc[i] = 'A'; // Fill src with 'A's
	char lsrc2[1000];
	char ldest2[1000];
	for (int i = 0; i < 1000; i++) lsrc2[i] = 'A'; // Fill src with 'A's
	memcpy(ldest, lsrc, sizeof(lsrc));
	ft_memcpy(ldest2, lsrc2, sizeof(lsrc2));
	if(memcmp(ldest2, lsrc2, sizeof(lsrc2)) == 0) {
		printf("The memory regions are equal.\n");
	} else {
		printf("The memory regions are not equal.\n");
	}

	//test5: different data types PASS 
	int src_int[] = {1, 2, 3, 4, 5};
	int dest_int[5];
	int src_int2[] = {1, 2, 3, 4, 5};
	int dest_int2[5];
	memcpy(dest_int, src_int, sizeof(src_int));
	ft_memcpy(dest_int2, src_int2, sizeof(src_int2));
	printf("test5: different data types (integer arrays)\n");
	for (int i = 0; i < 5; i++) {
		printf("%d", dest_int[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("%d", dest_int2[i]);
	}
	return (0);
}*/

/*//ft_memmove____________________________________________________________________________________________

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "piscine";
	char	str2[] = "piscine";
	memmove(str + 2, str, 3);
	ft_memmove(str2 + 2, str2, 3);
	printf("output wanted: pipisne\noriginal function: %s\nmy function: %s", str, str2);
	return (0);
}*/

/*//ft_strlcpy_______________________________________________________________________________________________

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char src[] = "Hello, World!";
	char dst[10];
	ft_strlcpy(dst, src, sizeof(dst));
	printf("%s", dst);
	return(0);
}*/

/*//ft_strlcat___________________________________________________________________________________________________

#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
	char    src[7] = "World!"; 
	char    dst[7] = "Hello "; 

	char    src2[7] = "World!"; 
	char    dst2[7] = "Hello ";
	
	int result = strlcat(dst, src, -9);
	int result2 = ft_strlcat(dst2, src2, -9);
	printf("original function: %s and the return is %d\nmy function: %s and the return is %d", dst, result, dst2, result2);
}*/

//ft_toupper___________________________________________________________________________________________________________


/*//ft_memchr_________________________________________

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*str = "oliveira";
	printf("%p\n", &str[7]);
	printf("%p", ft_memchr(str, 'a', 8));
	return (0);
}*/

/*//ft_memcmp____________________________________________

#include <stdio.h>
#include "libft.h"
#include <string.h>

int	main(void)
{
	char *s1 = "gabisrg erst";
	char *s2 = "gabirgertgw twt ";

	printf("%d\n", ft_memcmp(s1, s2, 10));
	printf("%d\n", memcmp(s1, s2, 10));
	return (0);
}*/

/*//ft_strnstr

#include <stdio.h>
#include "libft.h"
#include <bsd/string.h>

int	main(void)
{
	//haystack com coisas depois da needle, length com tamanho maior que a needle: mf da null
	//length negativo: manda pointeiro correto na OF
	//
	
	//char haystack[] = "gabriela oliveira goncalves";
	//char	needle[] = "oliveira";
	//quando o needle, ou needle e haystack, o null ta sgfaul sim. mas devolven null se o null for so o haystack
	//printf("%s", ft_strnstr(((void*)0), "fake", 3));
	//printf("OF: %s\nMF: %s", strnstr(haystack, needle, 99), ft_strnstr(NULL, needle, 99));
	
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	printf("%s\n%s", strnstr(haystack, needle, -1), ft_strnstr(haystack, needle, -1));
	return (0);
}*/

/*//ft_calloc___________________________________________________

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int n = 5;
    int *arr = (int *)ft_calloc(n, sizeof(int));

	for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
	}
	return (0);
}*/

//passar a norminette: calloc | substr | strnstr
//failed tests: memcpy | strnstr | calloc | memmove

//ft_substr__________________________________________________________-

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char source[] = "12345Gabriela";
	printf("%s", ft_substr(source, 5, 0));
	return(0);
}