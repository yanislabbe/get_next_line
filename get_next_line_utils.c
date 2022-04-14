/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <ylabbe@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:43:17 by ylabbe            #+#    #+#             */
/*   Updated: 2021/12/16 16:45:56 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *src)
{
	size_t	st;

	st = 0;
	while (src[st])
		st++;
	return (st);
}

char	*ft_strchr(char *src, int c)
{
	if (!src)
		return (NULL);
	while (*src || *src == c)
	{
		if (*src == (char)c)
			return ((char *)src);
		++src;
	}
	return (NULL);
}

char	*ft_strjoin(char *src, char *src2)
{
	char	*buf;
	size_t	st2;
	size_t	st;

	if (!src)
	{
		src = malloc(sizeof(char) * 1);
		src[0] = '\0';
	}
	buf = malloc(sizeof(char) * (ft_strlen(src) + ft_strlen(src2) + 1));
	if (!buf)
		return (NULL);
	st = -1;
	st2 = 0;
	if (src)
		while (src[++st] != '\0')
			buf[st] = src[st];
	while (src2[st2] != '\0')
		buf[st++] = src2[st2++];
	buf[ft_strlen(src) + ft_strlen(src2)] = '\0';
	free(src);
	return (buf);
}
