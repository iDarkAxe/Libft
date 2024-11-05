/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:25:12 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/05 17:43:06 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int		ft_isalpha(int character);
int		ft_isdigit(int character);
int		ft_isalnum(int character);
int		ft_isascii(int character);
int		ft_isprint(int character);
size_t	ft_strlen(const char *theString);
void	*ft_memset(void *pointer, int value, size_t count);

int		ft_toupper(int character);
int		ft_tolower(int character);
char	*ft_strchr(const char *string, int searchedChar);
char	*ft_strrchr(const char *string, int searchedChar);
int		ft_strncmp(const char *first, const char *second, size_t length);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);

#endif
