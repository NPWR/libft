#include <stdio.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_alnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

int	main(void)
{
	int	c;
	int	flags;

	printf("Alpha characters: ");
	for (c = 0; c < 128; c++)
		if (ft_isalpha(c))
			printf("%c", c);
	printf("\nDigits: ");
	for (c = 0; c < 128; c++)
		if (ft_isdigit(c))
			printf("%c", c);
	printf("\nAlphanumeric: ");
	for (c = 0; c < 128; c++)
		if (ft_isalnum(c))
			printf("%c", c);
	printf("\nAscii: ");
	for (c = 0; c < 128; c++)
		if (ft_isascii(c))
			printf("%c", c);
	printf("\nPrint: ");
	for (c = 0; c < 128; c++)
		if (ft_isprint(c))
			printf("%c", c);

}
