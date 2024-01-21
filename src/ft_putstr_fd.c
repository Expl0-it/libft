#include "../includes/libft.h"

/** @brief Put a character in file.
 * 
 * 	Outputs the string 's' to the given file
 * 	descriptor. \n	 	
 * 	STDFD:
 * 	0 => stdin;
 * 	1 => stdout;
 * 	2 => stderr;
 * 
 * 	@param s The string to output
 * 	@param fd The file descriptor on which to write
 *  @return Void.
 */
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/*
int main(void)
{
	ft_putstr_fd("abc", 1);
	return (0);
}
*/