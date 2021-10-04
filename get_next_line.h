/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurz <akurz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 09:01:05 by akurz             #+#    #+#             */
/*   Updated: 2021/09/30 16:13:11 by akurz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

/* Reading the BUFFER_SIZE from a file descriptor into a string (buff).
Appending Nullertimator to (buff). 
Saving (buff) inside static *char (save). 
Check save for Newline character. 
If Newline is encountered or we reach end of fd, we enter ft_return. */
char		*get_next_line(int fd);

/* Joining two strings and freeing the old one. */
static char	*ft_joinstuff(char *save, char *buff);

/* Returning a line and saving everything after the Newline in static (save).
(save) will remain when get_next_line gets called again. */
static char	*ft_return(char **save, int bytes);

/* Creating the line to return.
Saving everything that was in (save) but does not belong to the line. */
static char	*if_newline(char **save, char *line, int i);

size_t		ft_strlen(const char *str);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *s1);

#endif