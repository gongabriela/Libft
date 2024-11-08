
#include "libft.h"
#include <stdio.h>
#include <string.h> //memset
//#include <bsd/string.h> //strlcpy

/*//ft_strlen
int	main(void)
{
	char str[] = "MyName"; //size 6
	printf("String: MyName\nLength of the string: 6\nOriginal Function: %lu\nMy function: %d\n", strlen(str), ft_strlen(str));
	return (0);
}*/

/*//memset

int	main(void)
{
	//manipulating chars
	char s[] = "gabi";
	char c = '1';
	char s2[] = "gabi";
	char c2 = '1';
	unsigned char *result = memset(s, c, 4);
	unsigned char *result2 = ft_memset(s2, c2, 4);
	printf("Manipulating char\ns = gabi\nc = 1\nn = 4\nOriginal function: %s\nMy function: %s\n\n", result, result2);
	
	//manipulating ints: mostly used to set all bytes to zero since otherwise will lead to unexpected behavior 
	//but why does it work when we set to zero only?
	int si[] = {10, 12, 13, 14};
	int ci = 0;
	int si2[] = {10, 12, 13, 14};
	int ci2 = 0;
	int *resulti = memset(si, ci,sizeof(si));
	int *resulti2 = ft_memset(si2, ci2, sizeof(si2));
	printf("Manipulating ints\nint si = 10;\nint c = 1;\nn = 1;\n");
	printf("Original function: ");	
	int size = sizeof(si) / sizeof(si[0]);
	for(int i = 0; i < size; i++)
		printf("%d ", si[i]);
	printf("My function: ");
	int size2 = sizeof(si2) / sizeof(si2[0]);
	for(int i = 0; i < size2; i++)
		printf("%d ", si2[i]);
	return (0);
}*/

/*//bzero
int	main(void)
{
	char	s[] = "gabi";
	char	s2[] = "gabi";
	bzero(s, sizeof(s));
	ft_bzero(s2, sizeof(s2));
	printf("Original function: %s\nMy function: %s\n", s, s2);
	return (0);
}*/

/*//ft_memcpy
int	main(void)
{
	//testes: src vazia, dst vazia, as duas vazias, NULLs, n = 0, n < 0
	char	src[] = "gabi";
	char	dst[] = "1111";
	char	*result = memcpy(dst, src, 4);

	char	src2[] = "gabi";
	char	dst2[] = "1111";
	char	*result2 = ft_memcpy(dst2, src2, 4);

	printf("src = 'gabi';\ndst = '1111';\nn = 4;\nOriginal function: %s\nMy function: %s\n\n", result, result2);
	return(0);
}*/

/*//ft_memmove
int	main(void)
{
	//testes: src vazia, dst vazia, as duas vazias (tudo isso no parametro da funcao), NULLs, n = 0, n < 0
	char	s[] = "GabiOliveira";
	char	*result = memmove(s, s, 4);

	char	s2[] = "GabiOliveira";
	char	*result2 = ft_memmove(s2, s2, 4);

	printf("s = '';\nn = 4;\nOriginal function: %s\nMy function: %s\n\n", result, result2);
	return(0);
}*/

/*//ft_strlcpy - dont forget to uncomment bsd library and use -lbsd flag
int	main(void)
{
	char src[] = "gabi";
	char dst[5];
	char src2[] = "gabi";
	char dst2[5];
	strlcpy(dst, src, sizeof(src));
	ft_strlcpy(dst2, src2, sizeof(src2));
	printf("src = 'gabi';\nsize = sizeof(src)\nOriginal function: %s\nMy function: %s\n\n", dst, dst2);
}*/

//ft_strlcat - dont forget to uncomment bsd library and use -lbsd flag
int	main(void)
{

}