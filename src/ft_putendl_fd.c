#include "../includes/libft.h"

/** @brief Put a character in file.
 * 
 * 	Outputs the string ’s’ to the given file
 * 	descriptor, followed by a newline.
 * 	STDFD:
 * 	0 => stdin;
 * 	1 => stdout;
 * 	2 => stderr;
 * 
 * 	@param s The string to output
 * 	@param fd The file descriptor on which to write
 *  @return Void.
 */
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
int main(void)
{
	ft_putendl_fd("abc", 1);
	return (0);
}
*/