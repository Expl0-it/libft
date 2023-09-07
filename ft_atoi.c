#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	minus;
	int	num;

	num = 0;
	minus = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			minus *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
			num = num * 10;
			num += *nptr - 48;
		nptr++;
	}
	return (num * minus);
}

/*
#include <stdio.h>

int	main(void)
{
	int a = ft_atoi("   	-2147483648");
	printf("%d", a);
	return (0);
}
*/