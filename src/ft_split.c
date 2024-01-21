#include "../includes/libft.h"

/** @brief Separate stirngs and put into the array
 * 
 * 	Allocates (with malloc(3)) and returns an array
 * 	of strings obtained by splitting ’s’ using the
 * 	character ’c’ as a delimiter. The array must be
 * 	ended by a NULL pointer
 * 
 * 	@param s The string to be split
 * 	@param c The delimiter character
 *  @return The array of new strings resulting from the split or NULL if the allocation fails
 */

static int	ft_count_words(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**strings;

	if (s == NULL)
		return (NULL);
	strings = (char **)malloc(sizeof(char *) * ft_count_words(s, c));
	if (!strings)
		return (NULL);
	
	return (strings);
}

static int	ft_count_words(char const *s, char c)
{
	unsigned int	words;
	unsigned int	i;

	words = 0;
	i = 0;
	if (s[i] != c && s[i] != 0)
	{
		i++;
		words++;
	}
	while (s[i] != 0)
	{
		if (s[i] != c && s[i - 1] == c)
			words++;
		i++;
	}
	return (words);
}

/**/
#include <stdio.h>
int main (void)
{
	ft_split("abc a avsdjicji a  ", ' ');
	return (0);
}