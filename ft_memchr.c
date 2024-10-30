
#include <string.h>

void    *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char   chr;
    unsigned char   *s;
    
    chr = (unsigned char)c;
    s = (unsigned char *)str;

    while (n > 0)
    {
        if (*s == chr)
            return ((void *)s);
        n--;
        s++;
    }
    return (NULL);
}
