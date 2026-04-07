/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:32:06 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/04/07 13:07:23 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

int checker(char *str, int *i)
{
    if (!str)
        return (0);
    while (str[*i] != '\n' && str[*i] != '\0')
        (*i)++;
    if (str[*i] == '\n')
        return (1);
    return (0);
}

char *get_next_line(int fd)
{
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    static char *memory;
    char *buffer;

    if(checker(&memory))

}


char *splitter(char **str)
{
    char *temp;
    int i;

    i = 0;
    if(checker(&str,&i))
    {
        
    }
}