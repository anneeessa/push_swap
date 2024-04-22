/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:22:14 by anmohamm          #+#    #+#             */
/*   Updated: 2024/01/19 19:22:20 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	size_t	j;

	if (!dstsize && !dst)
		return (ft_strlen(src));
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	j = dlen;
	if (dstsize == 0 || dstsize <= dlen)
		return (slen + dstsize);
	while (src[i] && i < dstsize - dlen -1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}
/*
int main()
{
	char src[10] = "hello";
	char dest[] = "abcd";
	printf("%zu",ft_strlcat(dest,src,5));
	printf("%zu",strlcat(dest,src,5));
}*/
