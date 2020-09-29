/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:47:43 by droro             #+#    #+#             */
/*   Updated: 2020/09/29 16:37:44 by droro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int search()
{
	return (0);
}


int data_prep(char *data)
{
	int fd;
	char *buff1;
	int x;
	int i;
	int counter;
	
	i = 1;
	x = 20;
	checker = 0;
	counter = 0;
	buff1 = malloc(sizeof(buff1) * x);
	buff1[x - 1] = '\0';
	fd = open(data, O_RDONLY);
	/*while (checker != 2)
	{
		if ((read(fd, buff1, x - 1) != (-1)))
		{
			while (buff1 < &buff1[x - 1])
			{
				if (checker == 0)
				{
					
				}
				if (checker == 1)
				{
					
				}
				if (*buff1 == '\0')
				{
					checker++;			
				}
			}
		}
	}	
	printf("%s", buff1);*/
	return (0);
}

int finder()
{
	return (0);
}
void draw()
{
}

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	data_prep(argv[1]);
	return (0);
}
