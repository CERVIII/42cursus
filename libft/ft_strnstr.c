/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:21:18 by pcervill          #+#    #+#             */
/*   Updated: 2022/04/01 22:54:45 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	size_t	h;

	h = 0;
	n = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (h <= len && haystack[h])
	{
		n = 0;
		while (h + n < len && haystack[h + n] == needle[n])
		{
			n++;
			if (needle[n] == '\0')
				return ((char *)haystack + h);
		}
		h++;
	}
	if (haystack[h] == needle[n])
		return ((char *)haystack + n);
	else
		return (0);
}

/*
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	while (i <= len && haystack[i])
	{
		j = 0;
		while (i + j < len && haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	if (haystack[i] == needle[j])
		return ((char *)haystack + j);
	else
		return (0);
}*/
