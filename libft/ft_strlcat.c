/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:23:27 by pcervill          #+#    #+#             */
/*   Updated: 2022/03/25 22:51:59 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	contdst;
	size_t	contsrc;
	size_t	i;

	contdst = 0;
	while (dst[contdst])
		contdst++;
	contsrc = 0;
	while (src[contsrc])
		contsrc++;
	if (contdst > dstsize)
		return (contsrc + dstsize);
	i = contsrc;
	contsrc = 0;
	while (contsrc < (dstsize - contdst) - 1)
	{
		dst[contdst + contsrc] = src[contsrc];
		contsrc++;
	}
	return (i + contdst);
}
