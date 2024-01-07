/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irene <irene@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:45:17 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/07 17:12:03 by irene            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) // Escribe el carácter
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2) // Compara los strings y te devuelve la diferencia
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
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

void	ft_print_params(int argc, char *argv[]) // Imprime los parametros ordenados
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		s1; // Recorre los argumentos.
	int		s2; // Compara los argumentos y realizar el intercambio.
	char	*temp;

	s1 = 1;
	while (s1 < argc)
	{
		s2 = 1;
		while (s2 < argc)
		{
			if (ft_strcmp(argv[s1], argv[s2]) < 0)
			{
				temp = argv[s1];
				argv[s1] = argv[s2];
				argv[s2] = temp;
			}
			s2++;
		}
		s1++;
	}
	ft_print_params(argc, argv);
}
