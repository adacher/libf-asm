#include "libftasm.h"

void	test_isalnum()
{
	int i = -1;
	int err = 0;

	while (++i < 128)
	{
		if (ft_isalnum(i) != isalnum(i))
		{
			printf("\033[31merror on ft_isalnum at char -> %c\033[0m\n", i);
			err = 1;
		}
	}
	if (!err)
		printf("\033[92m ft_isalnum is ok \033[0m\n");
}

int main(void)
{
	test_isalnum();
	return (0);
}