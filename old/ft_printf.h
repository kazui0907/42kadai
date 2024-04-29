#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	handle_format(char format, va_list args, int *printed);
int		count_digits(int n);
void	print_hex(unsigned long num, char format, int *printed);

#endif // FT_PRINTF_H