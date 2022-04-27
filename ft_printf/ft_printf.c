/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:49:52 by pcervill          #+#    #+#             */
/*   Updated: 2022/04/27 17:14:18 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_type(va_list arg, const char str)
{
	int	result;

	result = 0;
	if (str == 'c')
		result = ft_putchar(va_arg(arg, int));
	if (str == 's')
		result = ft_strdup(va_arg(arg, const char));
	if (str == 'p')
		result = ft_dirpoint(va_arg(arg, const char));			//REVISAR
	if (str == 'd')
		result = ft_putnbr(va_arg(arg, int));
	if (str == 'i')
		result = ft_putnbr(va_arg(arg, const char));
	if (str == 'u')
		result = ft_putnbr(va_arg(arg, const char));			//REVISAR
	if (str == 'x')
		result = ft_hexa(va_arg(arg, const char));				//REVISAR
	if (str == 'X')
		result = ft_hexa(va_arg(arg, const char));				//REVISAR
	if (str == '%')
		result = ft_putchar('%');
	return (result);
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
		if (str[i] == '%')
		{
			result += ft_type(arg, str[i + 1]);
			i++;
		}
		else
			result += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (result);
}

int main(void)
{
	ft_printf("Hola que %% %s %c tal estas?", "CUCUU", "A");
}