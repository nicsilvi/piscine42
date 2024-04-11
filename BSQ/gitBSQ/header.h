/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman-j <mroman-j@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:37:52 by mroman-j          #+#    #+#             */
/*   Updated: 2024/04/10 16:48:41 by mroman-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H

# define HEADER_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void	ft_error(void);
int		analisis(char *buff);
int		count_newline(char *buff);
int		find_first_line(char *buff);
int		check_line_lengths(char *buff, int first_line);
int		are_lengths_equal(char *buff);
int		is_first_line_valid(char *buff);
int		ft_analisis(char *buff);
int		ft_compare_sqare(int cols, int obstacle, int lines, char **array);
void	ft_count_second_sqare(char **array, int lines, int cols, char obstacle);
void	ft_count_first_sqare(char **array, int lines, int cols, char obstacle);
char	ft_find_possible_square(char *buf, int line, int col);
char	**ft_call_make_array(char *buf);
char	**ft_make_array(int lines, int cols);
void	ft_counters(char *buf, int *lines, int *cols);
char	**ft_change_bidimension(char **array, char *buf, int lines);
char	*ft_readfile(char *filename);
void	ft_call_functions(char *argv);
int		ft_counter_file(char *file);

#endif
