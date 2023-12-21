/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:23:21 by iescalon          #+#    #+#             */
/*   Updated: 2023/12/21 10:15:07 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
// #include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point	point;
//	printf("%d\n", point.x);
//	printf("%d", point.y);
	set_point(&point);
	return (0);
}
