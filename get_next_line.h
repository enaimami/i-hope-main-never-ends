/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:32:06 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/04/28 00:00:00 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
int		ft_has_newline(char *str);
int		ft_strlen(char *str);
void	ft_strcpy(char *dst, char *src);
char	*ft_strjoin(char *stash, char *buf);
char	*ft_extract_line(char **stash);

#endif
