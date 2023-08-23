#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;
	
	p = (char *)s;
	while (n > 0)
	{
		p[n - 1] = c;
		n--;
	}
	return (s);
}

/*
#include <stdio.h>
int main()
{
    char str[50] = "iwejfiweoiwe wefwjiofewio wiefj";
    printf("\nBefore memset(): %s\n", str);
  
    // Fill 10 characters starting from str[10] with '.'
    memset(str + 10, '.', 10*sizeof(char));
  
    printf("After memset():  %s", str);
    return 0;
}
*/