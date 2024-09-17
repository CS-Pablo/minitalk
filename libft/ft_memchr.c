/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csauron <csauron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:26:02 by csauron           #+#    #+#             */
/*   Updated: 2024/09/09 22:30:01 by csauron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_s;

	str_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str_s[i] == (unsigned char)c)
			return (str_s + i);
		i++;
	}
	return (NULL);
}