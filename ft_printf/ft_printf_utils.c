/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:02:28 by pcervill          #+#    #+#             */
/*   Updated: 2022/04/26 09:04:25 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*cstr;
	size_t	count;

	while (s[count])
		count++;
	str = (char *)malloc(count + 1);
	if (!str)
		return (0);
	cstr = str;
	while (*s)
	{
		*str = *s;
		s++;
		str++;
	}
	*str = '\0';
	return ((char *)cstr);
}
