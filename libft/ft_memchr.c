/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:20:05 by anmohamm          #+#    #+#             */
/*   Updated: 2024/01/19 19:27:10 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t	n)
{
	size_t			i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char *)(s);
	while (i < n)
	{
		if (src[i] == (unsigned char)(c))
			return (src + i);
		i++;
	}
	return (0);
}
