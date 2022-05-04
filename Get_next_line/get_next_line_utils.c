/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:25:22 by pcervill          #+#    #+#             */
/*   Updated: 2022/05/04 17:50:29 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	cont;

	cont = 0;
	while (str[cont])
		cont++;
	return (cont);
}

char	*ft_strchr(const char *s, int c)
{
	int	cont;

	cont = 0;
	while (s[cont])
	{
		if (s[cont] == (char)c)
			return ((char *)s + cont);
		cont++;
	}
	if (c == '\0')
		return ((char *)s + cont);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	cont;
	char	*str;
	char	*cstr;

	if (!s1 || !s2)
		return (NULL);
	cont = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * cont + 1);
	if (!str)
		return (NULL);
	cstr = str;
	while (*s1)
	{
		*str = *s1;
		str++;
		s1++;
	}
	while (*s2)
	{
		*str = *s2;
		str++;
		s2++;
	}
	*str = '\0';
	return ((char *)cstr);
}
