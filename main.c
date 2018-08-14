#include "libftasm.h"

static void	test_isdigit(void)
{
	int		i;
	int		bug;

	i = 0;
	bug = 0;
	while (i <= 0x7f)
	{
		if (ft_isdigit(i) != isdigit(i))
		{
			bug = -1;
			printf("ft_isdigit is not valid for \'%c\'\n", i);
		}
		i++;
	}
	if (!bug)
		printf("ft_isdigit is valid\n");
}

static void	test_isprint(void)
{
	int		i;
	int		bug;

	i = 0;
	bug = 0;
	while (i <= 0x7f)
	{
		if (ft_isprint(i) != isprint(i))
		{
			bug = -1;
			printf("ft_isprint is not valid for \'%c\'\n", i);
		}
		i++;
	}
	if (!bug)
		printf("ft_isprint is valid\n");
}

static void	test_isalpha(void)
{
	int		i;
	int		bug;

	i = 0;
	bug = 0;
	while (i <= 0x7f)
	{
		if (ft_isalpha(i) != isalpha(i))
		{
			bug = -1;
			printf("ft_isalpha is not valid for \'%c\'\n", i);
		}
		i++;
	}
	if (!bug)
		printf("ft_isalpha is valid\n");
}

static void	test_isalnum(void)
{
	int		i;
	int		bug;

	i = 0;
	bug = 0;
	while (i <= 0x7f)
	{
		if (ft_isalnum(i) != isalnum(i))
		{
			bug = -1;
			printf("ft_isalnum is not valid for \'%c\'\n", i);
		}
		i++;
	}
	if (!bug)
		printf("ft_isalnum is valid\n");
}

static void	test_isascii(void)
{
	int		i;
	int		bug;

	i = 0;
	bug = 0;
	while (i <= 0x7f)
	{
		if (ft_isascii(i) != isascii(i))
		{
			bug = -1;
			printf("ft_isascii is not valid for \'%c\'\n", i);
		}
		i++;
	}
	i += 1;
	while (i <= 0x1F4)
	{
		if (ft_isascii(i) != isascii(i))
		{
			bug = -1;
			printf("ft_isascii is not valid for \'%c\'\n", i);
		}
		i++;
	}
	if (!bug)
		printf("ft_isascii is valid\n");
}

int main(void)
{
	test_isdigit();
	test_isprint();
	test_isalpha();
	test_isalnum();
	test_isascii();
	return (0);
}