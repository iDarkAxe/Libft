/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:05:54 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/06 14:47:35 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Find last occurrence of searchedChar
 *
 * @param string
 * @param searchedChar
 * @return char*
 */
char	*ft_strrchr(const char *string, int searchedChar)
{
	unsigned int	i;

	i = 0;
	while (string[i] != '\0')
		i++;
	while (i > 0)
	{
		if (string[i] == searchedChar)
			return ((char *)&string[i]);
		i--;
	}
	if (string[i] == searchedChar)
		return ((char *)&string[i]);
	return (NULL);
}

// int	main(void)
// {
// 	int		test;
// 	char	*pointer;
// 	char	*pointer2;
// 	char	*test_string;

// 	test = 'a';
// 	test_string = "abbbbbbbb";
// 	pointer = ft_strrchr(test_string, test);
// 	pointer2 = strrchr(test_string, test);
// 	if (pointer != NULL && pointer == pointer2)
// 		printf("strrchr OK at \"%s\"\n", pointer);
// 	else if (pointer == NULL && pointer == pointer2)
// 		printf("strrchr OK, char not found\n");
// 	else
// 		printf("ft_strrchr(): \"%s\" \net strrchr(): \"%s\"\n", pointer,
// 			pointer2);
// }
