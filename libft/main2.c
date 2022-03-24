/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:05:03 by pcervill          #+#    #+#             */
/*   Updated: 2022/03/23 21:05:06 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);

int	main(void)
{
	char	b[] = "HOLA MUNDO";
	char	b1[] = "HOLA MUNDO";
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
}
