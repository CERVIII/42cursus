/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:49:52 by pcervill          #+#    #+#             */
/*   Updated: 2022/04/25 18:06:00 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_type(va_arg arg, const char str)
{
	if (str == s)
		return (ft_strdup(arg));
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		result;
	va_list	arg;

	i = 0;
	result = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == %)
		{
			result += ft_type(arg, str[i + 1]);
			i++;
		}
		else
		{
			result += ft_putchar(str[i]);
		}
	}
	va_end(arg);
}
