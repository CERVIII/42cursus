/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:25:28 by pcervill          #+#    #+#             */
/*   Updated: 2022/05/04 18:40:45 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_write(int fd, char *save)
{
	char	*stread;
	int		sizebuff;

	sizebuff = 1;
	stread = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!stread)
		return (NULL);
	while (!ft_strchr(save, '\n') && sizebuff != 0)
	{
		sizebuff = read(fd, stread, BUFFER_SIZE);
		if (sizebuff == -1)
		{
			free(stread);
			return (NULL);
		}
		stread[sizebuff] = '\0';
		save = ft_strjoin(save, stread);
	}
	free (stread);
	return (save);
}

//AÑADIR MALLOC, STRLEN HASTA ENCONTRAR \n Y RESERVAR ESO
char	*ft_print(char *save)
{
	int		cont;
	char	*result;

	cont = 0;
	result = NULL;
	while (save[cont] != '\n')
	{
		result[cont] = save[cont];
		cont++;
	}
	result[cont] = '\0';
	return (result);
}

char	*get_next_line(int fd)
{
	static char	*save;
	char		*result;

	result = NULL;
	save = ft_read_write(fd, save);
	result = ft_print(save);
	return (result);
}

/*int	main(void)
{
	int		fd;
	char	*str;

	fd = open("text.txt", O_RDONLY);
	str = get_next_line(fd);
	printf("%s\n", str);
	close(fd);
	return (0);
}
*/