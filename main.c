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

void	test_isprint(void)
{
	int	i;
	int	bug;

	i = 0;
	bug = 0;
	while (i <= 127)
	{
		if (ft_isprint(i) != isprint(i))
		{
			bug = -1;
			printf("ft_isprint is not valid for \'%c\'\n", i);
		}
		i++;
	}
	if (!(bug))
		printf("ft_isprint is valid\n");
}

void	test_isalpha(void)
{
	int	i;
	int	bug;

	i = 0;
	bug = 0;
	while (i <= 127)
	{
		if (ft_isalpha(i) != isalpha(i))
		{
			bug = -1;
			printf("ft_isalpha is not valid for \'%c\'\n", i);
		}
		i++;
	}
	if (!(bug))
		printf("ft_isalpha is valid\n");
}

int main(void)
{
	test_isdigit();
	test_isprint();
	test_isalpha();
	return (0);
}