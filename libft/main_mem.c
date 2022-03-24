/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:46:35 by pcervill          #+#    #+#             */
/*   Updated: 2022/03/23 21:00:47 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
//void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
//void	*ft_memmove(void *dst, const void *src, size_t len);

int	main(void)
{
	char	b[] = "HOLA MUNDO";
	char	b1[] = "HOLA MUNDO";
	//char	dst[] = "Hola mundo";
	//char	src[] = "En un lugar de la mancha";
	int		c;
	size_t	len;

	c = '$';
	len = 4;
	bzero(b, len);
	printf("Funcion original: %s\n", b);
	ft_bzero(b1, len);
	printf("Mi	 funcion: %s\n", b1);
	memset(b, c, len);
	printf("Funcion original: %s\n", b);
	ft_memset(b1, c, len);
	printf("Mi	 funcion: %s\n", b1);
	/*memcpy(dst, src, len);
	printf("Funcion original: %s\n", dst);
	ft_memcpy(dst, src, len);
	printf("Mi	 funcion: %s\n", dst);
	memmove(dst, src, len);
	printf("Funcion original: %s\n", dst);
	ft_memmove(dst, src, len);
	printf("Mi	 funcion: %s\n", dst);*/
}
