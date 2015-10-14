#include <stdio.h>

# define ALPHA 1
# define DIGIT 2
# define ALNUM 4
# define ASCII 8
# define PRINT 16

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_alnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

int	main(void)
{
	int	c;
	int	flags;

	c = 0;
	printf("CHAR\tISALPHA\tISDIGIT\tISALNUM\tISASCII\tISPRINT\n");
	for (c = 0; c <= 128; c++)
	{
		flags = 0;
		flags += ALPHA * ft_isalpha(c);
		flags += DIGIT * ft_isdigit(c);
		flags += ALNUM * ft_isalnum(c);
		flags += ASCII * ft_isascii(c);
		flags += PRINT * ft_isprint(c);
		printf("%c", c);
		printf("\t");
		if (flags & ALPHA)
			printf("X");
		printf("\t");
		if (flags & DIGIT)
			printf("X");
		printf("\t");
		if (flags & ALNUM)
			printf("X");
		printf("\t");
		if (flags & ASCII)
			printf("X");
		printf("\t");
		if (flags & PRINT)
			printf("X");
		printf("\n");
	}
}
