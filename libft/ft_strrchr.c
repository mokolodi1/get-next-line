/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:42:49 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/07 11:46:34 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *haystack, int needle)
{
	char	*end;

	end = ft_strchr(haystack, '\0');
	while (haystack < end && *end != needle)
		end--;
	if (*end == needle)
		return ((char*)end);
	return (NULL);
}
