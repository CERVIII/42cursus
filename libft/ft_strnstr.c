/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:21:18 by pcervill          #+#    #+#             */
/*   Updated: 2022/03/29 22:29:25 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	cont;
	size_t	contn;

	if (*needle == '\0')
		return ((char *)haystack);
	else if (len == 0)
		return (0);
	contn = ft_strlen(needle);
	cont = 0;
	while (contn <= len && *haystack + cont != '\0')
	{
		if (!(ft_strncmp(haystack + cont, needle, contn)))
			return ((char *)haystack + cont);
		cont++;
		len--;
	}
	return (0);
}
