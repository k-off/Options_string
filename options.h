/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   options.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/12 15:38:24 by exam          #+#    #+#                 */
/*   Updated: 2019/04/12 15:38:24 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTIONS_H
# define OPTIONS_H

# include <unistd.h>

int		check_options(char *o, char **argv, int argc);
int		main(int argc, char **argv);

#endif
