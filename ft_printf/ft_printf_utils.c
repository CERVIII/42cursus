/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:11:03 by pcervill          #+#    #+#             */
/*   Updated: 2022/04/27 17:17:54 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*cstr;
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	str = (char *)malloc(count + 1);
	if (!str)
		return (0);
	cstr = str;
	while (*s)
	{
		*str = *s;
		s++;
		str++;
	}
	*str = '\0';
	return ((char *)cstr);
}

int	ft_putnbr(int n)
{
	int	num;

	num = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			num += write(1, "-2", 2);
			n = 147483648;
		}
		else
		{
			num += write(1, '-', 1);
			n *= -1;
		}
	}
	if (n > 9)
		num += ft_putnbr(n / 10);
	num += ft_putchar((n % 10) + '0');
	return (num);
}

int ft_dirpoint(int c)
{
	
}

int	main(void)
{
	int	c;

	c = 12345;
	ft_putnbr(c);
}
