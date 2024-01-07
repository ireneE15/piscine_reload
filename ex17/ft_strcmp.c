/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irene <irene@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:54:11 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/07 16:59:33 by irene            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void) 
{
	char	*str1;
	char	*str2;
	int		resultado;

	str1 = "abc";
	str2 = "xyz";
	resultado = ft_strcmp(str1, str2);
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