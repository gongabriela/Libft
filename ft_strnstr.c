
#include "libft.h"


char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return((char *)&haystack[j]);
	while (0 < len && haystack[j] != '\0' && needle[i] != '\0')
	{
		if (haystack[j] == needle[i])
			i++;
		else
			i = 0;
		len--;
		j++;
	}
	if (needle[i] == '\0')
		return ((char *)&haystack[j - i]);
	return (NULL);
}
