/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:43:39 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/25 11:59:59 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char   *s;
    unsigned char   *d;
    
    s = (unsigned char *)src;
    d = (unsigned char *)dst;
    
    if(n == 0)
        return (dst);

    if (dst == NULL && src == NULL)
        return (NULL);
    
    if (s < d)
    {
        s = (unsigned char *)src + n - 1;
        d = (unsigned char *)dst + n - 1;
            
        while (n > 0)
        {
            *d = *s;
            s--;
            d--;
            n--;
        }
        return (dst);
    }
    else
    {
        while (n > 0)
        {
            *d = *s;
            s++;
            d++;
            n--;
        }
        return (dst);
    }
    
}
//fazer mais testes antes de finalizar (outros tipos de dados por ex.)
int main(void)
{
    char src[] = "";
    char dst[] = "";

    char src2[] = "";
    char dst2[] = "";

    memmove(dst, src, sizeof(src));
    ft_memmove(dst2, src2, sizeof(src2));
    
    printf("the original function returns %s\nmy function returns %s", dst, dst2);
    return (0);
}