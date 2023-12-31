/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irene <irene@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:39:42 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/07 17:23:03 by irene            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	copy = (char *)malloc(ft_strlen(src) + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int	main(void)
{
	char	string[] = "Hola";
	char	*copia;

	copia = ft_strdup(string);
	printf("Original: %s\n", string);
	ft_strdup(string);
	printf("Copia: %s", copia);
	free(copia);
	return (0);
}
*/