/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:33:14 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/04 16:46:22 by ppontet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (void)
{
	int test;
	char * test_string = "Je suis une string";

	test = 'C';
	if (ft_isalpha(test) == isalpha(test) || (ft_isalpha(test) == 1 && isalpha(test) != 0))
		printf("isalpha OK\n");
	else
		printf("ft_isalpha(): %d et isalpha(): %d\n", ft_isalpha(test), isalpha(test));

	test = 5;
	if (ft_isdigit(test) == isdigit(test) || (ft_isdigit(test) == 1 && isdigit(test) != 0))
		printf("isdigit OK\n");
	else
		printf("ft_isdigit(): %d et isdigit(): %d\n", ft_isdigit(test), isdigit(test));

	test = 5;
	if (ft_isalnum(test) == isalnum(test) || (ft_isalnum(test) == 1 && isalnum(test) != 0))
		printf("isalnum OK with %d\n", test);
	else
		printf("ft_isalnum(): %d et isalnum(): %d\n", ft_isalnum(test), isalnum(test));
	test = '+';
	if 	(ft_isalnum(test) == isalnum(test) || (ft_isalnum(test) == 1 && isalnum(test) != 0))
		printf("isalnum OK with %c, %d\n", test, test);
	else
		printf("ft_isalnum(): %d et isalnum(): %d\n", ft_isalnum(test), isalnum(test));

	test = 5;
	if (ft_isascii(test) == isascii(test) || (ft_isascii(test) == 1 && isascii(test) != 0))
		printf("isascii OK with %d\n", test);
	else
		printf("ft_isascii(): %d et isascii(): %d\n", ft_isascii(test), isascii(test));
	test = 21954;
	if 	(ft_isascii(test) == isascii(test) || (ft_isascii(test) == 1 && isascii(test) != 0))
		printf("isascii OK with %d\n", test);
	else
		printf("ft_isascii(): %d et isascii(): %d\n", ft_isascii(test), isascii(test));

	test = 5;
	if (ft_isprint(test) == isprint(test) || (ft_isprint(test) == 1 && isprint(test) != 0))
		printf("isprint OK with %d\n", test);
	else
		printf("ft_isprint(): %d et isprint(): %d\n", ft_isprint(test), isprint(test));
	test = 21954;
	if 	(ft_isprint(test) == isprint(test) || (ft_isprint(test) == 1 && isprint(test) != 0))
		printf("isprint OK with %d\n", test);
	else
		printf("ft_isprint(): %d et isprint(): %d\n", ft_isprint(test), isprint(test));

	test = 5;
	if (ft_strlen(test_string) == strlen(test_string))
		printf("strlen OK\n");
	else
		printf("ft_strlen(): %ld et strlen(): %ld\n", ft_strlen(test_string), strlen(test_string));
}
