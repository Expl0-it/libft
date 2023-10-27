#include "../includes/libft.h"

/** @brief Sets every character of the string to the value ’\0’.
 * 
 *  @param s the string that needs to be cleared
 *  @return pointer to the matched character or NULL if the character is not found
 */
void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		s[i] = 0;
		i++;
	}
}

/*
#include <stdio.h>
int main(void)
{
	char	str[3] = "42";
	printf("%s\n", str);
	ft_strclr(str);
	printf("%s\n", str);
	return 0;
}
*/