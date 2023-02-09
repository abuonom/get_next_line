/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:44:36 by abuonomo          #+#    #+#             */
/*   Updated: 2023/02/09 18:31:55 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE

# define GET_NEXT_LINE
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif
# include <unistd.h>

char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
#endif
