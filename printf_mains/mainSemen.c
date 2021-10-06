#include "libftprintf.h"
#include <stdio.h>


int main()
{
	char str[] = "%s %d %-20p %% %c %0*x";
	int c = -1000;
	int a = printf(str, "good", c, &c, 'g', 20, 23888);
	int b = ft_printf(str, "good", c, &c, 'g', 20, 23888);
	if (a == b)
		ft_printf("ok");
}
