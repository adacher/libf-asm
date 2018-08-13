#include "libftasm.h"

void	test_isdigit(void)
{
	int	i;
	int	bug;

	i = 0;
	bug = 0;
	while (i <= 127)
	{
		if (ft_isdigit(i) != isdigit(i))
		{
			bug = -1;
			printf("ft_isdigit is not valid for \'%c\'\n", i);
		}
		i++;
	}
	if (!(bug))
		printf("ft_isdigit is valid\n");
}

int main(void)
{
	test_isdigit();
	return (0);
}