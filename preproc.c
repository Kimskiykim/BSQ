/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preproc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 17:02:10 by droro             #+#    #+#             */
/*   Updated: 2020/09/29 17:37:34 by droro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int f_buff(char *data)
{
	char *buff1;
	int fd;
	int x;
	
	x = 25;
	buff1 = malloc(sizeof(buff1) * x);
	buff1[x - 1] = '\0';
	fd = open(data, O_RDONLY);
	if (fd == -1)
	{
		write(2,"\n", 1);
	}
	else
	{
		read(fd, buff1, x - 1);
		printf("%s", buff1);
		
	}
	close(fd);
	free(buff1);
	return (0);
}
