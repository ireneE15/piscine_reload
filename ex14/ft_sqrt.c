/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irene <irene@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:25:52 by iescalon          #+#    #+#             */
/*   Updated: 2023/12/27 16:16:44 by irene            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (n * n <= nb)
	{
		n++;
		if (n * n == nb)
		{
			return (n);
		}
	}
	return (0);
}
/*
int	main(void)
{
	int	num;
	int	result;

	num = 25;
	result = ft_sqrt(num);
	printf ("La raíz cuadrada de %d es %d", num, result);
	return (0);
}
*/