/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:22:24 by anmohamm          #+#    #+#             */
/*   Updated: 2024/01/19 19:22:31 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strlcpy() copies up to dstsize -1 characters from the string src to dst,
nul terminating  the result if dstsize is not 0
If the src and dst strings overlap, the behaviour is undefined.
Returns the length  of src
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	x;

	x = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}
