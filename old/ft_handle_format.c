// #include "ft_printf.h"

// static void	print_char(va_list args, int *printed)
// {
//     char c;
//     c = (char)va_arg(args, int);
// 	ft_putchar_fd(c, 1);
//     (*printed)++;
// }

// static void	print_string(char *str)
// {
// 	if (!str)
// 		str = "NULL";
// 	ft_putstr_fd(str, 1);
// }

// static void	print_number(int n)
// {
// 	ft_putnbr_fd(n, 1);
// }

// static void	print_unsigned(unsigned int n)
// {
// 	if (n > 9)
// 		print_unsigned(n / 10);
// 	print_char(n % 10 + '0');
// }

// static void	print_hex(unsigned int num, char format)
// {
// 	char	*base;

// 	if (format == 'x')
// 		base = "0123456789abcdef";
// 	else
// 		base = "0123456789ABCDEF";
// 	if (num >= 16)
// 		print_hex(num / 16, format);
// 	print_char(base[num % 16]);
// }

// static void	print_pointer(void *ptr)
// {
// 	unsigned long	addr;

// 	addr = (unsigned long)ptr;
// 	print_string("0x7ffe");
// 	if (!ptr)
// 		print_string("0");
// 	else
// 		print_hex(addr, 'x');
// }