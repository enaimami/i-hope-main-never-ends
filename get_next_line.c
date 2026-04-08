/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:32:06 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/04/08 19:51:03 by mdisbuda         ###   ########.fr       */
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

int fucking_norminette(char *src,char **dst)
{
    int i;

    i = 0;
    while(src[i] != '\0')
    {
        (*dst)[i] = src[i];
        i++;
    }
    return (i);
}

char *ft_strjoin_gnl(char *stash, char *buf)
{
    char* temp;
    int i;
    int j;
    if (!stash)
    {
        stash = malloc(1);
        if (!stash)
            return (NULL);
        stash[0] = '\0';
    }
    temp = malloc(ft_strlen(stash) + ft_strlen(buf) + 1);
    if(!temp)
        return (NULL);
    i = 0;
    j = 0;
    temp[fucking_norminette(buf,&temp + (fucking_norminette(stash,&temp)))] = '\0';
    free(stash);
    return (temp);
}

char *reader(int fd)
{
    ssize_t bytes_read;
    char *temp;
    if(fd < 0)
        return (NULL);
    temp = malloc(BUFFER_SIZE + 1);
    if(!temp)
        return (NULL);
    bytes_read = read(fd,temp, BUFFER_SIZE);
    if(bytes_read <= 0)
    {
        free(temp);
        return (NULL);
    }
    temp[bytes_read] = '\0'; 
    return (temp);
}

char *get_next_line(int fd)
{
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    static char *memory;
    char *buffer;
    int i;

    if(checker(&memory,&i))
    {
        
    }


    free(memory);
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


char *splitter(char **src, int sp)
{
    char *dst;
    int j;
    int src_len; 

    src_len = ft_strlen(*src);
    if (sp > src_len)
        return (NULL); 
    dst = malloc(sp + 1);
    if(dst == NULL)
        return (NULL);
    j = 0;
    while(j < sp)
    {
        dst[j] = (*src)[j];
        j++;
    }
    dst[j] = '\0';
    *src = *src + sp;
    return(dst);
}
