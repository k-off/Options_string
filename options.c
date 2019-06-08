/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   options.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/12 15:38:24 by exam          #+#    #+#                 */
/*   Updated: 2019/04/12 15:38:24 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "options.h"

static int		check_option(char *src, char *dst)
{
	int		i;

	i = 1;
	while (src[i])
	{
		if (src[i] - 97 >= 0 && src[i] - 97 < 26)
			dst[31 - (src[i] - 97)] = '1';
		else
			return (-1);
		i++;
	}
	return (1);
}

int				check_options(char *o, char **argv, int argc)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-')
		{
			if (argv[i][1] == 'h')
				return (0);
			if (check_option(argv[i], o) == -1)
				return (-1);
		}
		i++;
	}
	return (1);
}
