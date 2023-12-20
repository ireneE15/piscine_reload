/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:31:11 by iescalon          #+#    #+#             */
/*   Updated: 2023/12/12 12:46:15 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	if (n >= 0)
	{
		ft_putchar('P');
	}
}
/*
int	main(void)
{
	ft_is_negative(-1);
	return(0);
}
*/
