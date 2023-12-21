/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:47:08 by iescalon          #+#    #+#             */
/*   Updated: 2023/12/21 14:48:03 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	is_length_greater_than_three(char *str)
{
    return (ft_strlen(str) > 3);
}

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i; // Cuenta la cantidad de elementos en un array
	int	count; // Cuenta la cantidad de elementos que cumplen la condición de una función del array

	count = 0;
	i = 0;
	while (tab[i] != NULL)
	{
		if ((*f)(tab[i]) == 1)
		{
			++count;
		}
		++i;
	}
	return (count);
}

int main(void)
{
    char *strings[] = {"apple", "banana", "orange", "kiwi", "grape"};

    int count = ft_count_if(strings, is_length_greater_than_three(&strings));

    printf("Number of strings with length greater than 3: %d\n", count);

    return (0);
}
