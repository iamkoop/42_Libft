/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilsdruon <nilsdruon@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:21:27 by nildruon          #+#    #+#             */
/*   Updated: 2026/07/06 12:49:04 by nilsdruon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include "gnl/get_next_line.h"

// Libft
typedef struct s_single_linked_node
{
	void						*content;
	struct s_single_linked_node	*next;
}					t_single_linked_node;

typedef struct s_double_linked_node
{
	void						*content;
	struct s_double_linked_node	*next;
	struct s_double_linked_node	*prev;
}					t_double_linked_node;

int						ft_atoi(const char *nptr);
long					ft_atol(const char *nptr);
long long				ft_atoll(const char *nptr);
void					ft_bzero(void *s, size_t n);
void					*ft_calloc(size_t nmemb, size_t size);
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isdigit(int c);
int						ft_isprint(int c);
char					*ft_itoa(int n);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					*ft_memcpy(void *dest, const void *src, size_t n);
void					*ft_memmove(void *dest, const void *src, size_t n);
void					*ft_memset(void *s, int c, size_t n);
void					ft_putchar_fd(char c, int fd);
void					ft_putendl_fd(char *s, int fd);
void					ft_putnbr_fd(int n, int fd);
void						ft_putstr_fd(char *s, int fd);
void					*ft_free_unfished_array_of_strings(char **s, int i);
char					**ft_split(char const *s, char c);
void					ft_free_the_split(char **data);
char					*ft_strchr(const char *s, int c);
char					*ft_strdup(const char *s);
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strjoin_three(char const *s1, char const *s2,
							char const *s3);
size_t					ft_strlcat(char *dst, const char *src, size_t size);
size_t					ft_strlcpy(char *dst, const char *src, size_t size);
size_t					ft_strlen(const char *s);
char					*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int						ft_strncmp(const char *s1, const char *s2, size_t n);
char					*ft_strnstr(const char *big, const char *little,
						size_t len);
char					*ft_strrchr(const char *s, int c);
char					*ft_strtrim(char const *s1, char const *set);
char					*ft_substr(char const *s, unsigned int start, size_t len);
int						ft_tolower(int c);
int						ft_toupper(int c);
size_t					ft_get_biggest_s(char    *s1, char   *s2);
t_single_linked_node	*ft_single_lstnew(void *content);
t_double_linked_node	*ft_double_lstnew(void *content);
void					ft_loop_dbl_lstadd(t_double_linked_node **lst,
					t_double_linked_node *new_node);
void					ft_single_lstclear(t_single_linked_node **lst, void (*del)(void*));
void					ft_lstadd_back_single_linked(t_single_linked_node **lst,
			t_single_linked_node *new);
void					ft_single_lstadd_front(t_single_linked_node **lst,
		t_single_linked_node *new);
int		ft_single_lstsize(t_single_linked_node *lst);
void	ft_looped_lstclear(t_double_linked_node **lst);
// Printf
int					print_hex(char c, uintptr_t nb, int len);
int					print_pointer(void *ptr);
int					putnbr_u_int(unsigned int n, int len);
int					ft_printf(const char *format, ...);

#endif
