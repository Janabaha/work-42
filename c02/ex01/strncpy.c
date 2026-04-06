/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabukhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 14:54:05 by jabukhai          #+#    #+#             */
/*   Updated: 2026/04/06 15:30:42 by jabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (src[i] == '\0')
		{
			dest[i] = '\0';
			i++;
		}
		else
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
