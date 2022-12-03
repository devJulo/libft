/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:00:45 by jfrancai          #+#    #+#             */
/*   Updated: 2022/01/10 15:07:29 by jfrancai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

char	*ft_free_leaks(char **s);
char	*get_next_line(int fd);
char	*malloc_buffer(int file_des);
char	*ft_free(char *s1, char *s2);

#endif
