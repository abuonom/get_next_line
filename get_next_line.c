/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:44:39 by abuonomo          #+#    #+#             */
/*   Updated: 2023/02/09 18:32:26 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	char *out;
	ssize_t check;
	while(read(fd,out,BUFFER_SIZE) > BUFFER_SIZE)
	{
		write(1,out,ft_strlen(out));
	}
}
