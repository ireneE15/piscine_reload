/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irene <irene@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:06:43 by iescalon          #+#    #+#             */
/*   Updated: 2023/12/27 16:00:43 by irene            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}
/*
int	main(void)
{
	int	n;
	int	m;

	n = 3;
	m = 5;
	printf("normal: n = %d, m = %d\n", n, m);
	ft_swap(&n, &m);
	printf("invertido: n = %d, m = %d\n", n, m);
	return(0);
}
*/
