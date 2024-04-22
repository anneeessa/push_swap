/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:23:04 by anmohamm          #+#    #+#             */
/*   Updated: 2024/01/19 19:27:42 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The terminating null character is also considered a part of the string
//1 is added to the stringlength so that the null character is also checked
#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	int		len;
	char	*sr;

	len = ft_strlen(s) + 1;
	sr = (char *)(s);
	while (len--)
	{
		if ((sr[len]) == (char)(c))
			return (sr + len);
	}
	return (0);
}
