/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:46:35 by pcervill          #+#    #+#             */
/*   Updated: 2022/03/25 00:28:05 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);

int	main(void)
{
	char	b[] = "HOLA MUNDO";
	char	b1[] = "HOLA MUNDO";
	char	dst[] = "Hola mundo";
	char	dst1[] = "Hola mundo";
	char	dst2[] = "Hola mundo";
	char	dst3[] = "Hola mundo";
	char	src[] = "En un lugar de la mancha";
	int		c;
	size_t	len;

	c = '$';
	len = 4;
	printf("\n---------FUNCION BZERO----------\n");
	bzero(b, len);
	printf("Funcion original: %s\n", b);
	ft_bzero(b1, len);
	printf("Mi	 funcion: %s\n", b1);
	printf("--------------FIN---------------\n");
	printf("\n---------FUNCION MEMSET---------\n");
	memset(b, c, len);
	printf("Funcion original: %s\n", b);
	ft_memset(b1, c, len);
	printf("Mi	 funcion: %s\n", b1);
	printf("--------------FIN---------------\n");
	printf("\n---------FUNCION MEMCPY---------\n");
	memcpy(dst, src, len);
	printf("Funcion original: %s\n", dst);
	ft_memcpy(dst1, src, len);
	printf("Mi	 funcion: %s\n", dst1);
	printf("--------------FIN---------------\n");
	printf("\n---------FUNCION MEMMOVE--------\n");
	memmove(dst2, src, len);
	printf("Funcion original: %s\n", dst2);
	ft_memmove(dst3, src, len);
	printf("Mi	 funcion: %s\n", dst3);
	printf("--------------FIN---------------\n");
}
