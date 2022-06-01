/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:23:24 by pcervill          #+#    #+#             */
/*   Updated: 2022/06/01 17:55:10 by pcervill         ###   ########.fr       */
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

# define NORMAL  "\x1B[0m"
# define RED  "\x1B[31m"
# define GREEN  "\x1B[32m"
# define YELLOW  "\x1B[33m"
# define BLUE  "\x1B[34m"
# define MAGENT  "\x1B[35m"
# define CYAN  "\x1B[36m"
# define WHITE  "\x1B[37m"

typedef struct s_win
{
	void	*mlx;
	void	*img;
	void	*mlx_win;
}	t_win;

typedef struct s_img
{
	int		w;
	int		h;
}	t_img;

typedef struct s_map
{
	//t_img	*img;
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
void	new_window(t_map *map, t_win *win, t_img *img);

#endif