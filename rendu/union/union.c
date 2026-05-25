#include <unistd.h>

void	print_unique(char *str, int *seen)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!seen[(unsigned char)str[i]])
		{
			seen[(unsigned char)str[i]] = 1;
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	seen[256] = {0};

	if (ac == 3)
	{
		print_unique(av[1], seen);
		print_unique(av[2], seen);
	}
	write(1, "\n", 1);
	return (0);
}