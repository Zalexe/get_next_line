/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:49:37 by cmarrued          #+#    #+#             */
/*   Updated: 2025/01/10 17:49:39 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	if (!c)
		c = "\0";
	while (c[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = ft_calloc((len1 + len2 + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	i = -1;
	while (s2[++i])
		str[len1++] = s2[i];
	str[len1] = '\0';
	return (str);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	void			*ptr;
	unsigned char	*byte_ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (SIZE_MAX / size < nmemb)
		return (NULL);
	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	byte_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < (nmemb * size))
	{
		byte_ptr[i] = '\0';
		i++;
	}
	return (ptr);
}

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (0);
}
