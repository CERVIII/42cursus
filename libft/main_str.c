/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:16:05 by pcervill          #+#    #+#             */
/*   Updated: 2022/03/25 00:58:18 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);

int	main(void)
{
	char	src[] = "En un lugar de la mancha";
	char	dst[] = "Hola que tal";
	char	dst1[] = "Hola que tal";
	char	dst2[] = "Hola que tal";
	char	dst3[] = "Hola que tal";
	char	dst4[] = "Hola que tal";
	char	dst5[] = "Hola que tal";
	char	dst6[] = "Hola que tal";
	char	dst7[] = "Hola que tal";
	size_t	dstsize;
	int		c;

	dstsize = 5;
	c = 'a';
	printf("\n---------FUNCION STRLEN---------\n");
	printf("Funcion original: %lu\n", strlen(src));
	printf("Mi	 funcion: %lu\n", ft_strlen(src));
	printf("-----------FIN STRLEN-----------\n");
	printf("\n---------FUNCION STRLCPY---------\n");
	printf("Funcion original: %lu\n", strlcpy(dst, src, dstsize));
	printf("Mi	 funcion: %lu\n", ft_strlcpy(dst1, src, dstsize));
	printf("dest : %s\n", dst);
	printf("dest1: %s\n", dst1);
	printf("-----------FIN STRLCPY-----------\n");
	printf("\n---------FUNCION STRLCAT---------\n");
//	printf("Funcion original: %lu\n", strlcat(dst6, src, dstsize));
//	printf("Mi	 funcion: %lu\n", ft_strlcat(dst7, src, dstsize));
//	printf("dest : %s\n", dst6);
//	printf("dest1: %s\n", dst7);
	printf("-----------FIN STRLCAT-----------\n");
	printf("\n---------FUNCION STRCHR---------\n");
	printf("Funcion original: %s\n", strchr(dst2, c));
	printf("Mi	 funcion: %s\n", ft_strchr(dst3, c));
	printf("-----------FIN STRCHR-----------\n");
	printf("\n---------FUNCION STRRCHR---------\n");
	printf("Funcion original: %s\n", strrchr(dst4, c));
	printf("Mi	 funcion: %s\n", ft_strrchr(dst5, c));
	printf("-----------FIN STRRCHR-----------\n");
	printf("\n---------FUNCION STRNCMP---------\n");
	printf("Funcion original: %d\n", strncmp(dst, dst1, dstsize));
	printf("Mi	 funcion: %d\n", ft_strncmp(dst, dst1, dstsize));
	printf("-----------FIN STRNCMP-----------\n");

}
