/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:42:58 by iescalon          #+#    #+#             */
/*   Updated: 2023/12/20 13:04:26 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int	main(void) 
{
	int	numero = -5;
	int	resultado = ABS(numero);

	printf("El valor absoluto de %d es %d\n", numero, resultado);

	return (0);
}