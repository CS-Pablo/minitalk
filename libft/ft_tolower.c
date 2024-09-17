/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csauron <csauron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:26:36 by csauron           #+#    #+#             */
/*   Updated: 2024/09/09 22:27:46 by csauron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_to_lower(char *str)
{
	char	*ret;

	ret = str;
	while (*str++)
		if (*(str - 1) >= 'A' && *(str - 1) <= 'Z')
			*(str - 1) += 32;
	return (ret);
}

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	printf("%s\n", argv[1]);
// 	printf("%s\n", ft_to_lower(argv[1]));
// }
