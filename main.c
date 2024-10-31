
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

int	main(void)
{
	char haystack[] = "gabriela oliveira";
	char	needle[] = "oliveira";

	printf("%s", ft_strnstr(haystack, needle, 18));
	return (0);
}*/

//ft_calloc___________________________________________________

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
}