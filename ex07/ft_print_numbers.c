/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:13:10 by iescalon          #+#    #+#             */
/*   Updated: 2023/12/12 12:31:21 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
void	ft_print_numbers(void)
{
	int	n;

	n = '0';
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return(0);
}
*/
