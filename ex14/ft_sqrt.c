/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:25:52 by iescalon          #+#    #+#             */
/*   Updated: 2023/12/21 12:41:31 by iescalon         ###   ########.fr       */
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