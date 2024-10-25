/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:01:59 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/25 14:23:52 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;

    i = 0;

    if (size == 0)
    {
        return (ft_strlen(src));
    }
    while (i < size - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

int main(void)
{
    char    src[] = "11111";
    char    dst[6];

    char    src2[] = "11111";
    char    dst2[6];

    int result = strlcpy(dst, src, 6);
    int result2 = ft_strlcpy(dst2, src2, 6);
    printf("original function: %s and the return is %d\nmy function: %s and the return is %d", dst, result, dst2, result2);
}

