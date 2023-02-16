/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:32:04 by abuonomo          #+#    #+#             */
/*   Updated: 2023/02/16 14:58:57 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char *back, char *buff)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!back)
	{
		back = malloc(1 * sizeof(char));
		back[0] = '\0';
	}
	if (!back || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(back) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (back)
		while (back[++i] != '\0')
			str[i] = back[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(back) + ft_strlen(buff)] = '\0';
	free (back);
	return (str);
}

char	*ft_line(char *backup)
{
	char	*str;
	int		i;

	i = 0;
	if (!backup[i])
		return (NULL);
	while (backup[i] && backup[i] != '\n')
		i++;
	str = malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (backup[i] != '\n' && backup[i])
	{
		str[i] = backup[i];
		i++;
	}
	if (backup[i] == '\n')
	{
		str[i] = backup[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*ft_backup(char *backup)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (backup[i] != '\n' && backup[i])
		i++;
	if (!backup[i])
	{
		free(backup);
		return (NULL);
	}
	str = malloc((ft_strlen(backup) - i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (backup[i])
		str[j++] = backup[i++];
	str[j] = '\0';
	free(backup);
	return (str);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
