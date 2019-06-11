#include "libftasm.h"

static void test_bzero(void) // a changer
{
	int		i;
	int		bug;
	char	*custom;
	char	*native;

	custom = strdup("thisisateststringforbzero");
	native = strdup("thisisateststringforbzero");
	i = 0;
	bug = 0;
	ft_bzero(custom, strlen(custom));
	bzero(native, strlen(native));
	while (i < 25)
	{
		if (custom[i] != native[i])
		{
			bug = -1;
			printf(RED "\tft_bzero is not valid for \'%c\'\n" RESET, custom[i]);
		}
		i++;
	}
	if (!bug)
		printf(GREEN "\tft_bzero   is valid\n" RESET);
	free(custom);
	free(native);
}

static void test_strcat(void)
{
	char *s1;
	char *s2;
	char *custom;
	char *native;
	int	bug;

	s1 = strdup("123456");
	s2 = strdup("789");
	custom = ft_strcat(s1, s2);
	native = strcat(s1, s2);
	bug = 0;
	if (strcmp(custom, native) != 0)
	{
		printf(RED "\t3 : ft_strcat is not valid for custom = %s and native = %s\n" RESET, custom, native);
		bug = -1;
	}
	if (!bug)
		printf(GREEN "\tft_strcat  is valid\n" RESET);
	free(s1);
	free(s2);
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

void test_puts(void)
{
	ft_puts(GREEN "\tft_puts	   is valid\n" RESET);
}

static void test_strlen(void)
{
	int		i;
	int		n;
	int		bug;

	i = ft_strlen("thisisateststringforstrlen");
	n = strlen("thisisateststringforstrlen");
	bug = 0;
	if (i != n)
	{
		bug = -1;
		printf(RED "\t1 : ft_strlen is not valid for i = %d and n = %d\n" RESET, i, n);
	}
	if (i == n)
	{
		i = ft_strlen("\n\n\n\tthisisanothertest");
		n = strlen("\n\n\n\tthisisanothertest");
		if (i != n)
		{
			bug = -1;
			printf(RED "\t2 : ft_strlen is not valid for i = %d and n = %d\n" RESET, i, n);
		}
	}
	if (i == n)
	{
		i = ft_strlen("0123456789\t9876543210\n");
		n = strlen("0123456789\t9876543210\n");
		if (i != n)
		{
			bug = -1;
			printf(RED "\t3 : ft_strlen is not valid for i = %d and n = %d\n" RESET, i, n);
		}
	}
	if (!bug)
		printf(GREEN "\tft_strlen  is valid\n" RESET);
}

void test_memset(void)
{
	char	*custom;
	char	*native;
	int		bug;

	custom = strdup("1");
	native = strdup("2");
	bug = 0;
	ft_memset(custom, 'c', 10);
	memset(native, 'c', 10);
	if (strcmp(custom, native) != 0)
	{
		bug = -1;
		printf(RED "\t3 : ft_memset is not valid for custom = %s and native = %s\n" RESET, custom, native);
	}
	ft_memset(custom, '0', 1);
	memset(native, '0', 1);
	if (strcmp(custom, native) != 0)
	{
		bug = -1;
		printf(RED "\t3 : ft_memset is not valid for custom = %s and native = %s\n" RESET, custom, native);
	}
	if (!bug)
		printf(GREEN "\tft_memset  is valid\n" RESET);
	free(custom);
	free(native);
}

void test_memcpy(void)
{
	char *custom;
	char *custom2;
	char *native;
	char *native2;
	int bug;

	custom = strdup("123456");
	custom2 = strdup("abcdef");
	native = strdup("123456");
	native2 = strdup("abcdef");
	bug = 0;
	if (strcmp(ft_memcpy(custom, custom2, 4), memcpy(native, native2, 4)) != 0)
	{
		bug = -1;
		printf(RED "\t3 : ft_memcpy is not valid for custom = %s and native = %s\n" RESET, custom, native);
	}
	if (strcmp(ft_memcpy(custom, custom2, 5), memcpy(native, native2, 5)) != 0)
	{
		bug = -1;
		printf(RED "\t3 : ft_memcpy is not valid for custom = %s and native = %s\n" RESET, custom, native);
	}
	if (!bug)
		printf(GREEN "\tft_memcpy  is valid\n" RESET);
	free(custom);
	free(custom2);
	free(native);
	free (native2);
}

void test_strdup(void)
{
	char *native;
	char *custom;
	int bug;
	bug = 0;
	native = strdup("123456\n\t");
	custom = ft_strdup("123456\n\t");
	if (strcmp(native, custom) != 0)
	{
		bug = -1;
		printf(RED "\t3 : ft_strdup is not valid for custom = %s and native = %s\n" RESET, custom, native);
	}
	if (!bug)
		printf(GREEN "\tft_strdup  is valid\n" RESET);
	free(native);
	free(custom);
}

int main(void)
{
	printf("\n\t-------- PART 1 --------\n\n");
	test_bzero();
	test_strcat();
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_toupper();
	test_tolower();
	test_puts();
	printf("\n\t-------- PART 2 --------\n\n");
	test_strlen();
	test_memset();
	test_memcpy();
	test_strdup();
	printf("\n\t-------- PART 3 --------\n\n");
	test_ft_cat();
	return (0);
}