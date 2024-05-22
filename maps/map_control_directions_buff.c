/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_control_directions_buff.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zumgenc <zumgenc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:57:29 by zumgenc           #+#    #+#             */
/*   Updated: 2024/05/15 12:14:41 by zumgenc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "../libft/libft.h"

int	map_so_control_buff(t_map *map, int i)
{
	if ((ft_strncmp(map->map_buff[i], "SO ", 3) == 0)
		&& (map->soflag_buff != 1))
	{
		map->soflag_buff = 1;
		map->flagcount_buff++;
		return (1);
	}
	else
		return (0);
}

int	map_no_control_buff(t_map *map, int i)
{
	if ((ft_strncmp(map->map_buff[i], "NO ", 3) == 0)
		&& (map->noflag_buff != 1))
	{
		map->noflag_buff = 1;
		map->flagcount_buff++;
		return (1);
	}
	else
		return (0);
}

int	map_ea_control_buff(t_map *map, int i)
{
	if ((ft_strncmp(map->map_buff[i], "EA ", 3) == 0)
		&& (map->eaflag_buff != 1))
	{
		map->eaflag_buff = 1;
		map->flagcount_buff++;
		return (1);
	}
	else
		return (0);
}

int	map_we_control_buff(t_map *map, int i)
{
	if ((ft_strncmp(map->map_buff[i], "WE ", 3) == 0)
		&& (map->weflag_buff != 1))
	{
		map->weflag_buff = 1;
		map->flagcount_buff++;
		return (1);
	}
	else
		return (0);
}

int	map_f_control_buff(t_map *map, int i)
{
	if ((ft_strncmp(map->map_buff[i], "F ", 2) == 0) && (map->fflag_buff != 1))
	{
		map->fflag_buff = 1;
		map->flagcount_buff++;
		return (1);
	}
	else
		return (0);
}
