#ifndef EXAM_RANK02_H
# define EXAM_RANK02_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_print_alphabet(void);
void	ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_print_comb(void);
void	ft_print_comb2(void);
void	ft_putnbr(int nb);
void	ft_print_combn(int n);
void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int	ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	ft_str_is_alpha(char *str);
int	ft_isalpha(int c);
int	ft_isspace(int c);
int	ft_str_is_numeric(char *str);
int	ft_isdigit(int c);
int	ft_str_is_lowercase(char *str);
int	ft_islower(int c);
int	ft_str_is_uppercase(char *str);
int	ft_isupper(int c);
int	ft_str_is_printable(char *str);
int	ft_isprint(int c);
int	ft_toupper(int c);
char	*ft_strupcase(char *str);
int	ft_tolower(int c);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void	ft_putstr_non_printable(char *str);
void	*ft_print_memory(void *addr, unsigned int size);
int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int	ft_atoi(char *str);
void	ft_putnbr_base(int nbr, char *base);
int	ft_atoi_base(char *str, char *base);
size_t	ft_strcspn(const char *s, const char *reject);
size_t	ft_strspn(const char *s, const char *accept);

#endif
