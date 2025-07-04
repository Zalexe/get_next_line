/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:49:25 by cmarrued          #+#    #+#             */
/*   Updated: 2025/01/10 17:49:26 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdio.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

char		*get_next_line(int fd);
char		*append_buffer(char *b_buffer, char *read_buffer);
char		*extract_line(char *b_buffer);
char		*obtain_remain(char *b_buffer);
char		*read_from_file(char *b_buffer, int fd);

//AUX
void		*ft_calloc(size_t nmemb, size_t size);
size_t		ft_strlen(const char *c);
char		*ft_strchr(const char *str, int c);
char		*ft_strjoin(char const *s1, char const *s2);
#endif
