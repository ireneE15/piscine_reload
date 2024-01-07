/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irene <irene@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:14:41 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/07 17:30:36 by irene            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*str;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	str = (int *)malloc(sizeof(int) * (max - min)); // Multiplica el tamaño de un entero por la cantidad de elementos de un array.
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}
/*
int main(void)
{
    int max;
    int min;
    int *result;
    int i;

    max = 5;
    min = 0;
    result = ft_range(min, max);
	printf("Los números correspondientes son: ");
    i = 0;
	while (i < (max - min))
    {
    	printf("%i", result[i]);
        i++;
    }
	printf ("\n");
    free(result);
    return (0);
}
*/