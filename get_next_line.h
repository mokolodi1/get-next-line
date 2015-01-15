/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 14:24:33 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/25 19:54:14 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# define BUF_SIZE		1
# define SPILL_MULT		2
# define MAX_FD			1000

typedef struct		s_stock
{
	char			*spill;
	long			length;
	long			lu;
	int				read_ret;
	char			*line_end;
}					t_stock;

char				*ft_strsub(char const *string, size_t start, size_t len);
char				*ft_strcpy(char *dest, const char *source);
char				*ft_memcpy(char *dest, const char *source, size_t max);
int					get_next_line(int fd, char **line);

#endif
