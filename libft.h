#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

void	ft_putchar(char c);
void	ft_putstr(const char *s);
void	ft_putnstr(const char *s, size_t n);
void	*ft_memset(void *ptr, int value, size_t num);
void	ft_putendl(const char *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr_fd(int nbr, int fd);
void	ft_bzero(void *ptr, size_t num);
void	*ft_memcpy(void *dst, void *src, size_t num);
void	*ft_memmove(void *dst, void *src, size_t num);
void	*ft_memccpy(void *dst, void *src, int c, size_t num);
void	*ft_memchr(void *ptr, int value, size_t num);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	ft_strclr(char *s);
size_t	ft_strlen(const char  *s);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t n);
char	*ft_strcat(char *dst, const  char *src);
char	*ft_strncat(char *dst, const char *src, size_t n);
size_t	ft_strlcat(char *buf, const char *src, size_t buflen);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_striter(char *s, void(*f)(char *s));
int	ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_atoi(const char *s);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);

#endif
