/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_is.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:05:13 by pcervill          #+#    #+#             */
/*   Updated: 2022/03/25 00:36:15 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);

int	main(void)
{
	int	c;
	int	c1;
	int	c2;
	int	c3;

	c = 50;
	c1 = 73;
	c2 = 160;
	c3 = 100;
	printf("\n--------FUNCION ISASCII--------\n");
	printf("Funcion original: %d\n", isascii(c));
	printf("Mi	funcion: %d\n", ft_isascii(c));
	printf("Funcion original: %d\n", isascii(c1));
	printf("Mi	funcion: %d\n", ft_isascii(c1));
	printf("Funcion original: %d\n", isascii(c2));
	printf("Mi	funcion: %d\n", ft_isascii(c2));
	printf("Funcion original: %d\n", isascii(c3));
	printf("Mi	funcion: %d\n", ft_isascii(c3));
	printf("----------FIN ISASCII----------\n");
	printf("\n--------FUNCION ISDIGIT--------\n");
	printf("Funcion original: %d\n", isascii(c));
	printf("Mi	funcion: %d\n", ft_isascii(c));
	printf("Funcion original: %d\n", isascii(c1));
	printf("Mi	funcion: %d\n", ft_isascii(c1));
	printf("Funcion original: %d\n", isascii(c2));
	printf("Mi	funcion: %d\n", ft_isascii(c2));
	printf("Funcion original: %d\n", isascii(c3));
	printf("Mi	funcion: %d\n", ft_isascii(c3));
	printf("----------FIN ISDIGIT----------\n");
	printf("\n--------FUNCION ISALNUM--------\n");
	printf("Funcion original: %d\n", isascii(c));
	printf("Mi	funcion: %d\n", ft_isascii(c));
	printf("Funcion original: %d\n", isascii(c1));
	printf("Mi	funcion: %d\n", ft_isascii(c1));
	printf("Funcion original: %d\n", isascii(c2));
	printf("Mi	funcion: %d\n", ft_isascii(c2));
	printf("Funcion original: %d\n", isascii(c3));
	printf("Mi	funcion: %d\n", ft_isascii(c3));
	printf("----------FIN ISALNUM----------\n");
	printf("\n--------FUNCION ISALPHA--------\n");
	printf("Funcion original: %d\n", isascii(c));
	printf("Mi	funcion: %d\n", ft_isascii(c));
	printf("Funcion original: %d\n", isascii(c1));
	printf("Mi	funcion: %d\n", ft_isascii(c1));
	printf("Funcion original: %d\n", isascii(c2));
	printf("Mi	funcion: %d\n", ft_isascii(c2));
	printf("Funcion original: %d\n", isascii(c3));
	printf("Mi	funcion: %d\n", ft_isascii(c3));
	printf("----------FIN ISALPHA----------\n");
}
