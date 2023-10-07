#include "libft.h"

static unsigned int	ft_num_length(int n);

/** @brief Convert integer to string.
 * 
 * 	Allocates (with malloc(3)) and returns a string
 * 	representing the integer received as an argument.
 * 	Negative numbers must be handled
 * 
 * 	@param n the integer to convert
 *  @return The string representing the integer or NULL if the allocation fails
 */
char	*ft_itoa(int n)
{
	char	*string_num;
	unsigned int	length;
	unsigned int	number;

	length = ft_num_length(n);
	string_num = ft_strnew(length);
	if (n < 0)
	{
		string_num[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		string_num [0] = '0';
	while (number != 0)
	{
		string_num[length - 1] = (number % 10) + '0';
		number /= 10;
		length--;
	}
	return (string_num);
	
	
}

static unsigned int	ft_num_length(int n)
{
	unsigned int	length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		length += 1;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

/*
#include <stdio.h>
int main(void)
{
	char	*a = ft_itoa(-2147483648);
	printf("%s", a);
	return (0);
}
*/