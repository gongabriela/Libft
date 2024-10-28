/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:19:54 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/28 18:23:10 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    int i;
    int j;
    int test;

    test = ft_strlen(dst) + ft_strlen(src);
    if (size <= ft_strlen(dst))
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