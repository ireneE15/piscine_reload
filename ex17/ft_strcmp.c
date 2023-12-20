/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:54:11 by iescalon          #+#    #+#             */
/*   Updated: 2023/12/15 13:24:57 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0') /*Compara cada carácter de s1 y s2 mientras
											  sean iguales y no hayan llegado al final
											  de ninguna de las dos cadenas.*/
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
/*
int	main(void) 
{
	char	str1[]
	char	str2[]
	int		resultado

	str1[] = "abc";
	str2[] = "xyz";
	resutado = ft_strcmp(str1, str2);
    if (resultado < 0) 
	{
		printf("%s es menor que %s\n", str1, str2);
    }
	else if (resultado > 0) 
	{
		printf("%s es mayor que %s\n", str1, str2);
	}
	else 
	{
		printf("%s es igual a %s\n", str1, str2);
	}
	return (0);
}
*/
