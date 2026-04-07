/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:32:06 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/04/07 19:15:23 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

int checker(char *str, int *i)
{
    if(!str)
        return (0);
    *i = 0;
    while (str[*i] && str[*i] != '\n')
        (*i)++;
    return (str[*i] == '\n');
}

char *get_next_line(int fd)
{
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    static char *memory;
    char *buffer;
    int i;

    if(checker(&memory,&i))

}


char *splitter(char **str)
{
    char *temp;
    int i;
    int x;

    i = 0;
    x = 0;
    if(checker(&str,&i))
    {
        while(x < i+1)
        {
            temp[x] = (*str)[x];
            x++;
        }
    }
}


int ft_strlen(char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    return (i);
}


char *splitter(char *src, int sp)
{
    char *dst;
    int j;
    int src_len; 

    src_len = ft_strlen(src);
    if (sp > src_len)
        return (NULL); 
    dst = malloc(sp + 1);
    if(dst == NULL)
        return (NULL);
    j = 0;
    while(j < sp)
    {
        dst[j] = src[j];
        j++;
    }
    dst[j] = '\0';
    return(dst);
}
