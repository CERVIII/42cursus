/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:16:05 by pcervill          #+#    #+#             */
/*   Updated: 2022/03/28 20:41:56 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_atoi(const char *str);

int	main(void)
{
	char	src[] = "En un lugar de la mancha";
	char	dst[] = "omg1||||||||||||||||";
	char	dst1[] = "omg3";
	char	dst2[] = "Hola que tal";
	char	dst3[] = "Hola que tal";
	char	dst4[] = "Hola que tal";
	char	dst5[] = "Hola que tal";
	char	dst6[100] = "Hola que tal";
	char	dst7[100] = "Hola que tal";
	char	str[60] = "	 	   2147483647";
	char	str1[60] = "	 	   -99999999999999999";
	size_t	dstsizecpy;
	size_t	dstsizecat;
	int		c;

	dstsizecpy = 5;
	dstsizecat = 48;
	c = 'a';
	printf("\n---------FUNCION STRLEN---------\n");
	printf("Funcion original: %lu\n", strlen(src));
	printf("Mi	 funcion: %lu\n", ft_strlen(src));
	printf("-----------FIN STRLEN-----------\n");
	printf("\n---------FUNCION STRLCPY---------\n");
	printf("Funcion original: %lu\n", strlcpy(dst, src, dstsizecpy));
	printf("Mi	 funcion: %lu\n", ft_strlcpy(dst1, src, dstsizecpy));
	printf("dest : %s\n", dst);
	printf("dest1: %s\n", dst1);
	printf("-----------FIN STRLCPY-----------\n");
	printf("\n---------FUNCION STRLCAT---------\n");
	printf("Funcion original: %lu\n", strlcat(dst6, src, dstsizecat));
	printf("Mi	 funcion: %lu\n", ft_strlcat(dst7, src, dstsizecat));
	printf("dest : %s\n", dst6);
	printf("dest1: %s\n", dst7);
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
	printf("Funcion original: %d\n", strncmp(dst, dst1, dstsizecpy));
	printf("Mi	 funcion: %d\n", ft_strncmp(dst, dst1, dstsizecpy));
	printf("-----------FIN STRNCMP-----------\n");
	printf("\n---------FUNCION ATOI---------\n");
	printf("Funcion original: %d\n", atoi(str1));
	printf("Mi función: %d\n", ft_atoi(str));
	printf("-----------FIN ATOI-----------\n");
}
