/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:38:12 by pcervill          #+#    #+#             */
/*   Updated: 2022/05/25 19:53:33 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	arg_ok(int argc, char *argv)
{
	char	*str;

	if (argc == 2)
	{	
		str = ft_strrchr(argv, '.');
		if (ft_strcmp(str, ".ber") == 0)
			return (1);
	}
	return (0);
}

void	read_write_fdmap(char *argv, t_map *map)
{
	char	*newstr;
	char	*strmap;
	int		fd;

	fd = open(argv, O_RDONLY);
	if (!fd)
		return ;
	strmap = ft_strdup("");
	while (1)
	{
		newstr = get_next_line(fd);
		if (!newstr)
			break ;
		strmap = ft_strjoin(strmap, newstr);
		free(newstr);
	}
	map->map = ft_split(strmap, '\n');
	free(strmap);
}
