/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:25:12 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/07 15:39:17 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int				ft_isalpha(int character);
int				ft_isdigit(int character);
int				ft_isalnum(int character);
int				ft_isascii(int character);
int				ft_isprint(int character);
size_t			ft_strlen(const char *the_string);
void			*ft_memset(void *pointer, int value, size_t count);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *destination, const void *source, size_t size);
void			*ft_memmove(void *destination, const void *source, size_t size);
unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dst, char *src, unsigned int size);
int				ft_toupper(int character);
int				ft_tolower(int character);
char			*ft_strchr(const char *string, int searched_char);
char			*ft_strrchr(const char *string, int searched_char);
int				ft_strncmp(const char *first, const char *second,
					size_t length);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_atoi(const char *nptr);
void			*ft_calloc(size_t element_count, size_t element_size);
char			*ft_strdup(const char *source);

#endif
