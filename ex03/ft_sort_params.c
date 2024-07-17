#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	c;

	c = 1;
	if (ac > 1)
	{
		i = 0;
		while (av[c][i])
		{
			write (1, &av[c][i], 1);
			i++;
		}
		write (1, "\n", 1);
		c++;
	}
	return (0);
}