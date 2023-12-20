/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:25:31 by iescalon          #+#    #+#             */
/*   Updated: 2023/12/14 11:50:49 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	result;
	int	number;

	number = 4;
	result = ft_iterative_factorial(number);
	printf("El factorial de %d es %d\n", number, result);
	return (0);
}
*/
