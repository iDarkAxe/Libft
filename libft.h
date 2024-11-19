/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:25:12 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/19 14:26:57 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include "ft_put_fd.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
//@TODO Needs to be tidied like Makefile
int		ft_isalpha(int character);
int		ft_isdigit(int character);
int		ft_isalnum(int character);
int		ft_isascii(int character);
int		ft_isprint(int character);
size_t	ft_strlen(const char *the_string);
void	*ft_memset(void *pointer, int value, size_t count);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *destination, const void *source, size_t size);
void	*ft_memmove(void *destination, const void *source, size_t size);
size_t	ft_strlcpy(char *dst, char *src, unsigned int size);
size_t	ft_strlcat(char *dst, char *src, size_t size);
int		ft_toupper(int character);
int		ft_tolower(int character);
char	*ft_strchr(const char *string, int searched_char);
char	*ft_strrchr(const char *string, int searched_char);
int		ft_strncmp(const char *first, const char *second, size_t length);
void	*ft_memchr(const void *memory_block, int searched_char, size_t size);
int		ft_memcmp(const void *src, const void *set, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);
int		ft_atoi_base(char *str, char *base);
void	*ft_calloc(size_t element_count, size_t element_size);
char	*ft_strdup(const char *source);
char	*ft_strndup(const char *source, size_t len);

char	*ft_substr(char const *src, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
ssize_t	ft_putnstr_fd(char *s, size_t len, int fd);
void	ft_putendl_fd(char *s, int fd);
ssize_t	ft_putnendl_fd(char *s, size_t len, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_bin(int nbr);
void	ft_putnbr_poneyvif(int nbr);
void	ft_putnbr_oct(int nbr);
void	ft_putnbr_hex(int nbr, char height);
void	ft_putnbr_base(int nbr, char *base);
int		ft_check_base_atoi(char *base);
int		ft_check_base_putnbr(char *base);

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif
