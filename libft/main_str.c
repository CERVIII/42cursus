/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:16:05 by pcervill          #+#    #+#             */
/*   Updated: 2022/03/23 21:51:20 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);

int	main(void)
{
	char	src[] = "En un lugar de la mancha";
	char	dst[] = "Hola que tal";
	char	dst1[] = "Hola que tal";
	size_t	dstsize;
	//int		c;

	dstsize = 5;
	//c = 'l';
	/*printf("Funcion original: %lu\n", strlen(src));
	printf("Mi	 funcion: %lu\n", ft_strlen(src));
	printf("Funcion original: %s\n", strchr(src, c));
	printf("Mi	 funcion: %s\n", ft_strchr(src, c));
	printf("Funcion original: %s\n", strrchr(src, c));
	printf("Mi	 funcion: %s\n", ft_strrchr(src, c));*/
	printf("Funcion original: %lu\n", strlcpy(dst, src, dstsize));
	printf("Mi	 funcion: %lu\n", ft_strlcpy(dst1, src, dstsize));
	printf("dest : %s\n", dst);
	printf("dest1: %s\n", dst1);
}
