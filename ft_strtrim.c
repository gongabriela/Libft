#include <stdlib.h>
#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    //encontrar onde a trimmed string começa e termina usando pointeiros
    int i;
    int k; //inicio da s1
    int j; //fim da s1
    int size;
    char    *trim;
    
    i = 0;
    j = 0;
    //ver o inicio da string
    while(set[j] != '\0')
    {
        j = 0;
        while (s1[i] != set[j] && set[j] != '\0')
            j++;
        if (s1[i] == set[j])
            i++;
    }
    //nao ta cortando o fim da string!
    k = ft_strlen(s1);
    j = 0;
    while(set[j] != '\0')
    {
        j = 0;
        while (s1[k] != set[j] && set[j] != '\0')
            j++;
        if (s1[k] == set[j])
            k--;
    }
    //k = ultima posicao da string
    size = k - i - 1;
    trim = ft_substr(s1, i, size);
    return(trim);
}
    
    
    
    
    
    
    
    
    
    //alocar espaço 
    //passar trimmed string - usar substr?
    //retornar trimmed string


