/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:41:29 by abuonomo          #+#    #+#             */
/*   Updated: 2023/02/14 18:42:12 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
#include <stdio.h>
char	*get_next_line(int fd);
char	*ft_read_str(int fd, char *backup);
char	*ft_line(char *backup);
char	*ft_backup(char *backup);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
# ifndef BUFFER_SIZE
# define BUFFER_SIZE 4
# endif
#endif
