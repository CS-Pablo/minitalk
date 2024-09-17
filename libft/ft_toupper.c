/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csauron <csauron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:26:17 by csauron           #+#    #+#             */
/*   Updated: 2024/09/09 22:27:42 by csauron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_to_upper(char *str)
{
	char	*ret;

	ret = str;
	while (*str++)
		if (*(str - 1) >= 'a' && *(str - 1) <= 'z')
			*(str - 1) -= 32;
	return (ret);
}

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	printf("%s\n", argv[1]);
// 	printf("%s\n", ft_to_upper(argv[1]));
// }
