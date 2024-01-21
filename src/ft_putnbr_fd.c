#include "../includes/libft.h"

/** @brief Put a character in file.
 * 
 * 	Outputs the integer ’n’ to the given file
 * 	descriptor.
 * 	STDFD:
 * 	0 => stdin;
 * 	1 => stdout;
 * 	2 => stderr;
 * 
 * 	@param n The integer to output
 * 	@param fd The file descriptor on which to write
 *  @return Void.
 */
void	ft_putnbr_fd(int n, int fd)
{
		if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		n = n % 10;
	}
	if (n < 10)
		ft_putchar_fd(n + 48, fd);
}

/*
int	main(void)
{
	ft_putnbr_fd(12345, 1);
	return (0);
}
*/