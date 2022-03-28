/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:59:20 by pcervill          #+#    #+#             */
/*   Updated: 2022/03/28 00:38:45 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	snumber(int numsign, long int number/*, int sign*/)
{
	if (numsign > 1) /* || (number > 2147483647 && sign == 1))*/
		number = -1;
	else if (number > 2147483648 && sign != 1)
		number = 0;
	return (number);
}

int	ft_atoi(const char *nptr)
{
	int	numsign;
	int	sign;
	long int	number;

	while ((*nptr == ' ') || (*nptr >= 7 && *nptr <= 13))
		nptr++;
	sign = 0;
	numsign = 0;
	while (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign++;
		nptr++;
		numsign++;
	}
	number = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		number = 10 * number + (*nptr - 48);
		nptr++;
	}
	number = snumber(numsign, number/*, sign*/);
	if (sign == 1)
		return (number * -1);
	return (number);
}

int	main(void)
{
	char str[60] = "	 	   -2147483647";
	char str1[60] = "	 	   -99999999999999999";
	printf("Mi función: %d\n", ft_atoi(str));
	printf("Funcion original: %d\n", atoi(str1));
}
