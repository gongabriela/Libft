
#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size)
{
    unsigned int    i; //pq size_t i em alguns exemplos?
    unsigned char   *temp;

    temp = malloc(count * sizeof(size));
    if (temp == NULL)
        return (NULL);
    i = 0;
    while (i < count)
    { 
        temp[i] = 0; //pq no exemplo e count * size? 
        i++;
    }
    return(temp);
}
