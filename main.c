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
			printf(RED "\tft_isdigit is not valid for \'%c\'\n" RESET, i);
		}
		i++;
	}
	if (!bug)
		printf(GREEN "\tft_isdigit is valid\n" RESET);
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
			printf(RED "\tft_isprint is not valid for \'%c\'\n" RESET, i);
		}
		i++;
	}
	if (!bug)
		printf(GREEN "\tft_isprint is valid\n" RESET);
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
			printf(RED "\tft_isalpha is not valid for \'%c\'\n" RESET, i);
		}
		i++;
	}
	if (!bug)
		printf(GREEN "\tft_isalpha is valid\n" RESET);
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
			printf(RED "\tft_isalnum is not valid for \'%c\'\n" RESET, i);
		}
		i++;
	}
	if (!bug)
		printf(GREEN "\tft_isalnum is valid\n" RESET);
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
			printf(RED "\tft_isascii is not valid for \'%c\'\n" RESET, i);
		}
		i++;
	}
	i += 1;
	while (i <= 0x1F4)
	{
		if (ft_isascii(i) != isascii(i))
		{
			bug = -1;
			printf(RED "\tft_isascii is not valid for \'%c\'\n" RESET, i);
		}
		i++;
	}
	if (!bug)
		printf(GREEN "\tft_isascii is valid\n" RESET);
}

static void	test_toupper(void)
{
	int		i;
	int		bug;

	i = 0;
	bug = 0;
	while (i <= 0x7f)
	{
		if (ft_toupper(i) != toupper(i))
		{
			bug = -1;
			printf(RED "\tft_toupper is not valid for \'%c\'\n" RESET, i);
		}
		i++;
	}
	if (!bug)
		printf(GREEN "\tft_toupper is valid\n" RESET);
}

static void	test_tolower(void)
{
	int		i;
	int		bug;

	i = 0;
	bug = 0;
	while (i <= 0x7f)
	{
		if (ft_tolower(i) != tolower(i))
		{
			bug = -1;
			printf(RED "\tft_tolower is not valid for \'%c\'\n" RESET, i);
		}
		i++;
	}
	if (!bug)
		printf(GREEN "\tft_tolower is valid\n" RESET);
}

static void test_bzero(void)
{
	char	*custom;
	char	*native;
	int		i;
	int		bug;

	custom = strdup("thisisateststringforbzero");
	native = strdup("thisisateststringforbzero");
	i = 0;
	bug = 0;

	ft_bzero(custom, strlen(custom));
	bzero(native, strlen(native));
	while (i <= strlen(custom))
	{
		if (custom[i] != native[i])
		{
			bug = -1;
			printf(RED "\tft_bzero is not valid for \'%c\'\n" RESET, custom[i]);
		}
		i++;
	}
	if (!bug)
		printf(GREEN "\tft_bzero   is valid \033[0m\n" RESET);
}

int main(void)
{
	printf("\n\t-------- PART 1 --------\n\n");
	test_isdigit();
	test_isprint();
	test_isalpha();
	test_isalnum();
	test_isascii();
	test_toupper();
	test_tolower();
	test_bzero();
	printf("\n\t-------- PART 2 --------\n\n");
	return (0);
}