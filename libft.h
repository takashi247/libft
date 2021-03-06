/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnishina <tnishina@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:43:30 by tnishina          #+#    #+#             */
/*   Updated: 2021/12/03 18:58:22 by tnishina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* required header files */

# include <stdlib.h>
# include <unistd.h>

/* for INT_MAX, INT_MIN */
# include <limits.h>

/* for DBL_MAX, DBL_MIN */
# include <float.h>

/* for INFINITY and NAN */
# include <math.h>

/* for boolean type */
# include "bool.h"

/* for ft_atof */
# define MAX_NEGATIVE_INDEX 324

/* list structure */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* bidirectional list */

typedef struct s_blist
{
	void			*content;
	struct s_blist	*prev;
	struct s_blist	*next;
}	t_blist;

/* Part 1 functions */

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
size_t			ft_strlen(const char *s);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(const char *heystack, const char *needle,
					size_t len);
int				ft_atoi(const char *str);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s1);

/* Part 2 functions */

char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

/* Bonus part functions */

t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
size_t			ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

/* additional original functions */

size_t			ft_strlen_u(const unsigned char *us);
unsigned char	*ft_strdup_u(const unsigned char *us1);
size_t			ft_strlcat_u(unsigned char *dst, const unsigned char *src,
					size_t dstsize);
size_t			ft_strlcpy_u(unsigned char *dst, const unsigned char *src,
					size_t dstsize);
unsigned char	*ft_strjoin_u(unsigned char const *us1,
					unsigned char const *us2);
void			ft_putstr_fd_u(unsigned char *us, int fd);
void			ft_putendl_fd_u(unsigned char *us, int fd);
int				ft_atoi_s(const char *str);
int				ft_isspace(int c);
double			ft_atof(const char *str);
int				ft_isnumeric(char *str);
void			ft_free_str(char **s);
void			ft_free_str_u(unsigned char **us);
t_blist			*ft_blstnew(void *content);
void			ft_blstadd_front(t_blist **blst, t_blist *new);
size_t			ft_blstsize(t_blist *blst);
void			ft_blstadd_back(t_blist **blst, t_blist *new);
void			ft_blstdelone(t_blist *blst, void (*del)(void *));
void			ft_blstclear(t_blist **blst, void (*del)(void *));
t_bool			ft_isint(const char *str);

#endif
