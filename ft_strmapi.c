/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:32:11 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/11/05 11:39:02 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char    *ft_strmapi(const char *s, char(*f)(unsigned int, char))
{
    int i;
    char *str;

    i = 0;
    if (s[i] == '\0')
        return(s);
    str = malloc(ft_strlen(s) + 1 * sizeof(char));
    if(str == NULL)
        return (NULL);
    while (s[i] != '\0')
    {
        str[i] = (*f)(i, s[i]);
        i++;
    }
    str[i + 1] = '\0';
    return (str);
}