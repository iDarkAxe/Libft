/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:06:20 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/11 14:30:21 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdio.h> //@TODO A SUPPRIMER

//@WIP A TERMINER
//@TODO rate tout les tests
/**
	* @brief Search a substring in a bigger string,
		up to len position in string
	*
	* @param big
	* @param little
	* @param len
	* @return char*
	*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_size;
	size_t	count;

	little_size = 0;
	count = 0;
	while (little[little_size] != '\0')
		little_size++;
	if (little_size == 0)
		return ((char *)&big[0]);
	while (big[count] != '\0' && len > 0)
	{
		if (ft_strncmp(&big[count], little, len) == 0)
		{
			return ((char *)&big[count]);
		}
		count++;
		len--;
	}
	return ((char *)big);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = "ipsum dolor sit lorem ipsum dolor";
// 	if (!(str = ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum",
// 				35)))
// 		printf("NULL");
// 	else
// 		printf("%s", str);
// }
