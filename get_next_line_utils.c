/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:07:53 by abuonomo          #+#    #+#             */
/*   Updated: 2023/02/14 17:34:32 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

char	*ft_line(char *backup)
{
	char	*str;
	int		i;

	str = malloc(ft_strlen(backup));
	if(!str)
		return (NULL);
	i = 0;
	while(*(backup + i) != '\n')
	{
		*(str + i) = *(backup + i);
		i++;
	}
	*(str + i) = *(backup + i);
	return (str);
}

char	*ft_backup(char *backup)
{
	char	*str;

	str = malloc(ft_strlen(backup));
	if(!str)
		return (NULL);
	while(*backup != '\n')
		backup++;
	backup++;
	while(*backup != '\0')
	{
		*str = *backup;
		str++;
		backup++;
	}
	*str = '\0';
	return (str);
}

char    *ft_strchr(char *s, int c)
{
    int    i;

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
