/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:33:14 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/05 13:30:16 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		test;
	char	*test_string;

	test_string = "Je suis une string";
	test = 'C';
	if ((ft_isalpha(test) && isalpha(test))
		|| ft_isalpha(test) == isalpha(test))
		printf("isalpha OK\n");
	else
		printf("ft_isalpha(): %d et isalpha(): %d\n", ft_isalpha(test),
			isalpha(test));
	test = 5;
	if ((ft_isdigit(test) && isdigit(test))
		|| ft_isdigit(test) == isdigit(test))
		printf("isdigit OK\n");
	else
		printf("ft_isdigit(): %d et isdigit(): %d\n", ft_isdigit(test),
			isdigit(test));
	test = 5;
	if ((ft_isalnum(test) && isalnum(test))
		|| ft_isalnum(test) == isalnum(test))
		printf("isalnum OK with %d\n", test);
	else
		printf("ft_isalnum(): %d et isalnum(): %d\n", ft_isalnum(test),
			isalnum(test));
	test = '+';
	if ((ft_isalnum(test) && isalnum(test))
		|| ft_isalnum(test) == isalnum(test))
		printf("isalnum OK with %c, %d\n", test, test);
	else
		printf("ft_isalnum(): %d et isalnum(): %d\n", ft_isalnum(test),
			isalnum(test));
	test = 5;
	if ((ft_isascii(test) && isascii(test))
		|| ft_isascii(test) == isascii(test))
		printf("isascii OK with %d\n", test);
	else
		printf("ft_isascii(): %d et isascii(): %d\n", ft_isascii(test),
			isascii(test));
	test = 21954;
	if ((ft_isascii(test) && isascii(test))
		|| ft_isascii(test) == isascii(test))
		printf("isascii OK with %d\n", test);
	else
		printf("ft_isascii(): %d et isascii(): %d\n", ft_isascii(test),
			isascii(test));
	test = 5;
	if ((ft_isprint(test) && isprint(test))
		|| ft_isprint(test) == isprint(test))
		printf("isprint OK with %d\n", test);
	else
		printf("ft_isprint(): %d et isprint(): %d\n", ft_isprint(test),
			isprint(test));
	test = 21954;
	if ((ft_isprint(test) && isprint(test))
		|| ft_isprint(test) == isprint(test))
		printf("isprint OK with %d\n", test);
	else
		printf("ft_isprint(): %d et isprint(): %d\n", ft_isprint(test),
			isprint(test));
	if (ft_strlen(test_string) == strlen(test_string))
		printf("strlen OK\n");
	else
		printf("ft_strlen(): %ld et strlen(): %ld\n", ft_strlen(test_string),
			strlen(test_string));
	test = '5';
	if (ft_toupper(test) == toupper(test))
		printf("toupper OK\n");
	else
		printf("ft_toupper(): %d et toupper(): %d\n", ft_toupper(test),
			toupper(test));
	test = 'c';
	if (ft_toupper(test) == toupper(test))
		printf("toupper OK\n");
	else
		printf("ft_toupper(): %d et toupper(): %d\n", ft_toupper(test),
			toupper(test));
	test = 'C';
	if (ft_toupper(test) == toupper(test))
		printf("toupper OK\n");
	else
		printf("ft_toupper(): %d et toupper(): %d\n", ft_toupper(test),
			toupper(test));
	test = '5';
	if (ft_tolower(test) == tolower(test))
		printf("tolower OK\n");
	else
		printf("ft_tolower(): %d et tolower(): %d\n", ft_tolower(test),
			tolower(test));
	test = 'c';
	if (ft_tolower(test) == tolower(test))
		printf("tolower OK\n");
	else
		printf("ft_tolower(): %d et tolower(): %d\n", ft_tolower(test),
			tolower(test));
	test = 'C';
	if (ft_tolower(test) == tolower(test))
		printf("tolower OK\n");
	else
		printf("ft_tolower(): %d \net tolower(): %d\n", ft_tolower(test),
			tolower(test));
	test = 'C';
	if (ft_strchr(test_string, test) == strchr(test_string, test))
		printf("strchr OK\n");
	else
		printf("ft_strchr(): %s \net strchr(): %s\n", ft_strchr(test_string,
				test), strchr(test_string, test));
}
