/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flo-dolc <flo-dolc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 22:41:52 by flo-dolc          #+#    #+#             */
/*   Updated: 2024/02/09 11:05:44 by flo-dolc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

char	*get_next_line(int fd);
char	*read_from_file(int fd, char *leftover);
char	*get_line(char *leftover);
char	*get_new_leftover(char *leftover);
int		ft_strlen(const char *str);
char	*ft_strchr(const char *str, int ch);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strdup(const char *src);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

#endif
