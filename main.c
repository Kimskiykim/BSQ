/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblastoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 16:14:41 by eblastoi          #+#    #+#             */
/*   Updated: 2020/09/29 17:37:37 by droro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		check_buffer(char *buffer);
int		check_length(char *buffer);

int		main(int argc, char *argv[])
{
	int i;
	char *buff1;
	int fd;
	int x;

	i = 1;
	x = 25;
	buff1 = malloc(sizeof(buff1) * x);
	buff1[x - 1] = '\0';
	while (i < argc)
	{
		f_buff1(argv[i]);
	}	
		i++;
	}
	return (0);
}

int		check_buffer(char *buffer)
{
	int		i;
	int		j;
	int		length;
//	void	*params;
	int		num_lines;

	i = 1;
	j = 1;
	length = 0;
	while (buffer[i] != '\n')
	{
		if (buffer[0] <= '0' || buffer[0] > '9')
		{
			return (-1);
		}
		else
		{
			while (buffer[i] >= '0' && buffer[i] <= '9')
			{
				j++;
				printf("%d\n", j); 
			}
			if (j == '1')
			{
				num_lines = buffer[i] - '0';
				printf("%d\n", num_lines);
			}
			else
			{
				while (j < '1')
				{
					num_lines = num_lines * 10 + (buffer[i] - '0');
					j--;
				}
			}
		}
		i++;
	}
	while (buffer[1])
	{
		length++;
	}
	printf("%d", length);
	return (0);
}

/*int		check_length(char *buffer)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (buffer[i] != '\n')
	{
		length++;
	}
	if (length == check_length(buffer))
	{
		return (0);
	}
	else
	{
		write (2, "Error", 5);
		write (1, "\n", 1);
		return (-1);
	}
}
*/
