/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:07:49 by jyim              #+#    #+#             */
/*   Updated: 2022/11/24 11:33:48 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (s[c] != '\0')
		c++;
	return (c);
}

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	size_t			n;
	unsigned char	*temp;

	n = count * size;
	ptr = malloc(n);
	if (!ptr)
		return (0);
	temp = (unsigned char *)ptr;
	while ((n) > 0)
	{
	*temp++ = 0;
	n--;
	}
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	join_len;
	size_t	i;
	size_t	j;
	char	*strjoin;

	if (s1 == NULL && s2 == NULL)
		return (ft_strdup(""));
	join_len = ft_strlen(s1) + ft_strlen(s2);
	strjoin = malloc(sizeof(char) * (join_len) + 1);
	if (!strjoin)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		strjoin[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		strjoin[i++] = s2[j++];
	strjoin[i] = '\0';
	return (strjoin);
}

char	*ft_strchr(const char *s, int c)
{
	char	*temp_s;

	temp_s = (char *)s;
	while (*temp_s != (char)c)
	{
		if (!*temp_s)
			return (NULL);
		temp_s++;
	}
	return (temp_s);
}

char	*ft_strdup(const char *src)
{
	int		size;
	int		c;
	char	*srccpy;

	size = 0;
	c = 0;
	while (src[size] != '\0')
		size++;
	srccpy = (char *) malloc(sizeof(char) * size + 1);
	if (srccpy)
	{
		while (src[c] != '\0')
		{
			srccpy[c] = src[c];
			c++;
		}
		srccpy[c] = '\0';
		return (srccpy);
	}
	else
		return (NULL);
}
