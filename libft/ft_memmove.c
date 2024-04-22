/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:20:32 by anmohamm          #+#    #+#             */
/*   Updated: 2024/01/19 19:20:36 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The memmove() function copies len bytes from string src to string dst.
	The two strings may overlap; the copy is always done in a non-destructive
    manner.
	The memmove() function returns the original value of dst
	if the memory address for source is less than that of the dest
	copy from the back to avoid overlap.
	Overlap happens when you want to copy a character into a position
	where you just copied another character
	In overlap, some addresses will be overwritten before copied
	if all is well, copy like its a memcpy.. copy from front
*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	while (len--)
		*d++ = *s++;
	return (dst);
}
