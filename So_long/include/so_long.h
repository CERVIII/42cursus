/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:23:24 by pcervill          #+#    #+#             */
/*   Updated: 2022/05/30 13:25:41 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include "../lib/libft/libft.h"
# include "../lib/get_next_line/get_next_line.h"
# include <unistd.h>
# include <sys/types.h>
# include <stdio.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>

# define BUFFER_SIZE 1
# define PJ "./Sprites/Pacman_HD.xpm"
# define CO "./Sprites/coin.xpm"
# define EX "./Sprites/portal_close.xpm"
# define FL "./Sprites/floor1.xpm"
# define WL "./Sprites/wall.xpm"

typedef struct s_map
{
	char	**map;
	char	*strmap;
	int		wall;
	int		person;
	int		coin;
	int		exit;
	int		floor;
	int		xmax;
	int		ymax;
}	t_map;

int		arg_ok(int argc, char *argv);
void	read_write_fdmap(char *argv, t_map *map);
int		check_game_map(t_map *map);

#endif