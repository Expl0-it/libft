#include "libft.h"

//fills memory area with the value 0
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <stdio.h>
int main()
{
    char str[50] = "iwejfiweoiwe wefwjiofewio wiefj";
    printf("\nBefore bzero(): %s\n", str);
  
    // Fill 10 characters starting from str[10] with '.'
    ft_bzero(str + 10, '.', 10*sizeof(char));
  
    printf("After bzero():  %s", str);
    return 0;
}
*/