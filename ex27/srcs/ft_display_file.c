/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 09:59:17 by iescalon          #+#    #+#             */
/*   Updated: 2023/12/22 11:08:10 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // Para write, close y read
#include <fcntl.h> // Para open

void	ft_display_file(char *file_name)
{
	int		file;
	char	chara;

	file = open(file_name, O_RDONLY);
	if (file < 0)
	{
		write (1, "Cannot read file.\n", 19);
		return;
	}
	while (read(file, &chara, 1))
	{
		write(1, &chara, 1);
	}
	close(file);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		write (1, "File name missing.\n", 20);
		return (1);
	}
	if (argc != 2)
	{
		write (1, "Too many arguments.\n", 21);
		return (1);
	}
	else
	{
		ft_display_file(argv[1]);
	}
}
