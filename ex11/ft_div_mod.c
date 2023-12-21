/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:29:25 by iescalon          #+#    #+#             */
/*   Updated: 2023/12/21 12:35:26 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	n;
	int	m;
	int	*di;
	int	*mo;

	n = 10;
	m = 3;
	ft_div_mod(n, m, &di, &mo);

	printf("divisón: %d\n", di);
	printf("resto: %d", mo);
	return(0);
}
*/
