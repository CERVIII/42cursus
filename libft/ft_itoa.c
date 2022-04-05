/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:58:22 by pcervill          #+#    #+#             */
/*   Updated: 2022/04/05 23:09:20 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_putnbr(int n, char *str)
{
	size_t	conts;

	conts = 0;
	if (n == -2147483648)
	{
		str[conts++] = '-';
		str[conts++] = '2';
		ft_putnbr(n, );

	else if (n < 1)
	{
		str[conts++] = '-';
		ft_putnbr(n *= -1);
	}
	else if (n < 10)
	{
		str[conts++] = n + 48;
		return (str[cont]);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}*/

char    *ft_putnbr(int n, char *str)
{
  if (n == -2147483648)
  {
    *str++ = '-';
    *str++ = '2';
    ft_putnbr(n, str);
  }
  else if (n < 1)
  {
    *str++ = '-';
    ft_putnbr(n *= -1, str);
  }
  else if (n < 10)
  {
    *str++ = n + 48;
    return (str);
  }
  else
  {
    ft_putnbr(n / 10, str);
    ft_putnbr(n % 10, str);
  }
}

char	*ft_itoa(int n)
{
	char	*str;
	int		contm;

	contm = 0;
	if (n < 0)
	{
		contm++;
		while (n / 10 < 0)
			contm++;
	}
	else
	{
		while (n / 10 > 0)
			contm++;
	}
	str = ft_calloc(sizeof(char), contm + 1);
	if (!str)
		return (0);
//	str = ft_putnbr(n, str);
	return (str);
}
