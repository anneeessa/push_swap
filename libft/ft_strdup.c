/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:21:45 by anmohamm          #+#    #+#             */
/*   Updated: 2024/01/19 19:21:50 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const	char*s1)
{
	char	*dup;
	size_t	n;

	n = 0;
	dup = malloc(sizeof (char) * ft_strlen(s1) + 1);
	if (!dup)
		return (0);
	while (s1[n])
	{
		dup[n] = s1[n];
		n++;
	}
	dup[n] = '\0';
	return (dup);
}
