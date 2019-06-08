/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/12 15:38:24 by exam          #+#    #+#                 */
/*   Updated: 2019/04/12 15:38:24 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "options.h"

static void		ft_putstr(char *s)
{
	int		i;

	i = 0;
	if (s)
		while (s[i] != 0)
		{
			write(1, &s[i], 1);
			i++;
		}
}

static void		print_options(char *o)
{
	int		i;

	i = 0;
	while (i < 32)
	{
		if (i > 0 && i % 8 == 0)
			ft_putstr(" ");
		write(1, &o[i], 1);
		i++;
	}
}

static void		set_to_zero(char *o)
{
	int		i;

	i = 32;
	while (i > 0)
	{
		i--;
		o[i] = '0';
	}
}

int				main(int argc, char **argv)
{
	char	o[33];
	int		check;

	if (argc < 2)
		ft_putstr("options: abcdefghijklmnopqrstuvwxyz");
	else
	{
		set_to_zero(o);
		o[32] = 0;
		check = check_options(o, argv, argc);
		if (check == 1)
			print_options(o);
		else if (check == 0)
			ft_putstr("options: abcdefghijklmnopqrstuvwxyz");
		else if (check == -1)
			ft_putstr("Invalid Option");
	}
	ft_putstr("\n");
	return (0);
}
