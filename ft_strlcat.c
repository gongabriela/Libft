/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:19:54 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/25 18:19:28 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include <string.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    int i;
    int j;
    int test;

    test = strlen(dst) + strlen(src);
    if (size <= strlen(dst))
        return (test);
    j = 0;
    while (dst[j] != '\0')
        j++;
    i = 0;
    while (src[i] != '\0' && j < size - 1) //acho que o erro ta aqui
    {
        dst[j] = src[i];
        j++;
        i++;
    }
    dst[j] = '\0';
    return (test);
}

int main(void)
{
        char    src[14] = "World!12345"; // 11 chars, 12 com null
    char    dst[30] = "Hello "; //6 chars, 7 com null. total 17 chars, 18 cm null

    char    src2[14] = "World!12345"; 
    char    dst2[30] = "Hello ";

    int result = strlcat(dst, src, 17);
    int result2 = ft_strlcat(dst2, src2, 17);
    printf("original function: %s and the return is %d\nmy function: %s and the return is %d", dst, result, dst2, result2);
}