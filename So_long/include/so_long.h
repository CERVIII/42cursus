/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:23:24 by pcervill          #+#    #+#             */
/*   Updated: 2022/05/24 13:14:26 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>

# define PJ "./Sprites/Pacman_HD.xpm"
# define CO "./Sprites/coin.xpm"
# define EX "./Sprites/portal_close.xpm"
# define FL "./Sprites/floor1.xpm"
# define WL "./Sprites/wall.xpm"

typedef struct s_map
{
	char	**map;
	int		wall;
	int		person;
	int		coin;
	int		exit;
	int		floor;
}	t_map;

#endif